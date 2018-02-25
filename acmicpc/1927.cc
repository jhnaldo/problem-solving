#include <stdio.h>

#define PARENT(x) (((x)-1)/2)
#define LCHILD(x) ((x)*2+1)
#define RCHILD(x) ((x)*2+2)

void swap(int& x, int& y){
    int tmp = x;
    x = y;
    y = tmp;
}

class PriorQueue{
public:
    PriorQueue(){ size = 0; }

    void push(int k){
        int i;
        heap[size] = k;
        for (i = size; i > 0 && heap[PARENT(i)] > heap[i]; i = PARENT(i)) swap(heap[PARENT(i)], heap[i]);
        size++;
    }

    int pop(){
        int ret = heap[0], i;
        heap[0] = heap[--size];
        for (i = 0; LCHILD(i) < size;){
            int min;
            if (RCHILD(i) < size){
                min = (heap[LCHILD(i)] < heap[RCHILD(i)]? LCHILD(i):RCHILD(i));
            }else{
                min = LCHILD(i);
            }
            if (heap[min] < heap[i]){
                swap (heap[min], heap[i]);
                i = min;
            }else{
                break;
            }
        }
        return ret;
    }

    bool isEmpty(){ return size == 0; }
private:
    int heap[100000];
    int size;
};

int main(){
    PriorQueue* pq = new PriorQueue();
    int n, k;

    scanf("%d", &n);
    for (; n > 0; n--){
        scanf("%d", &k);
        if (k){
            pq->push(k);
        }else{
            if (pq->isEmpty()){
                printf("0\n");
            }else{
                printf("%d\n", pq->pop());
            }
        }
    }
    return 0;
}
