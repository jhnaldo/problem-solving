#include <stdio.h>

#define PARENT(x) ((x-1)/2)
#define LCHILD(x) ((x)*2+1)
#define RCHILD(x) ((x)*2+2)

class PriorQueue{
public:
    PriorQueue(){
        size = 0;
    }

    void push(int k){
        int i;
        heap[size] = k;
        for (i = size; PARENT(i) >= 0; i = PARENT(i)){
            int p = PARENT(i);
            if (heap[p] < heap[i])
                swap(heap[i], heap[p]);
            else
                break;
        }
        size++;
    }

    int pop(){
        int ret = heap[0];
        int i;
        heap[0] = heap[--size];
        for (i = 0; LCHILD(i) < size;){
            int max = LCHILD(i);
            if (RCHILD(i) < size) max = (heap[max] < heap[RCHILD(i)]? RCHILD(i):max);
            if (heap[max] > heap[i]){
                swap(heap[max], heap[i]);
                i = max;
            }else{
                break;
            }
        }
        return ret;
    }

    bool isEmpty() { return size == 0; }
private:
    int heap[100];
    int size;

    void swap(int &x, int &y){
        int tmp = x;
        x = y;
        y = tmp;
    }
};

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k, i, cur_max, num = 1;
        int *arr;
        bool *check;
        PriorQueue *pq = new PriorQueue();

        scanf("%d %d", &n, &k);
        arr = new int[n];
        check = new bool[n]();

        for (i = 0; i < n; i++){
            scanf("%d", &arr[i]);
            pq->push(arr[i]);
        }

        cur_max = pq->pop();
        for (i = 0; true; i = (i+1)%n){
            if (!check[i] && cur_max == arr[i]){
                if (i == k) break;
                num++;
                cur_max = pq->pop();
            }
        }
        printf("%d\n", num);

        delete[] arr;
        delete[] check;
        delete pq;
    }
    return 0;
}
