#include <stdio.h>

#define ISROOT(x) (x == 0)
#define PARENT(x) (((x)-1)/2)
#define LCHILD(x) ((x)*2+1)
#define RCHILD(x) ((x)*2+2)

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

class Heap{
public:
    Heap(){
        size = 0;
    }

    void push(int k){
        int cur = size;
        arr[size] = k;
        while (!ISROOT(cur) && arr[cur] < arr[PARENT(cur)]){
            swap(arr[cur], arr[PARENT(cur)]);
            cur = PARENT(cur);
        }
        size++;
    }

    int pop(){
        int cur = 0;
        int data = arr[0];
        arr[0] = arr[--size];
        while (LCHILD(cur) < size){
            int min_idx = LCHILD(cur);
            if (RCHILD(cur) < size && arr[RCHILD(cur)] < arr[LCHILD(cur)])
                min_idx = RCHILD(cur);
            if (arr[min_idx] >= arr[cur])
                break;
            swap(arr[cur], arr[min_idx]);
            cur = min_idx;
        }
        return data;
    }

    int size;
    int arr[100000];
};

int main(){
    int n, i, sum;
    Heap *heap = new Heap();
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int k;
        scanf("%d", &k);
        heap->push(k);
    }

    sum = 0;
    while(heap->size >= 2){
        int x = heap->pop();
        int y = heap->pop();
        sum += x+y;
        heap->push(x+y);
    }

    printf("%d\n", sum);

    delete heap;
    return 0;
}
