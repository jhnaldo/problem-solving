#include <stdio.h>

#define PARENT(x) (((x)-1)/2)
#define LCHILD(x) ((x)*2+1)
#define RCHILD(x) ((x)*2+2)

class Heap{
public:
    Heap(int n){
        arr = new long long[n];
        size = 0;
    }

    void swap(int x, int y){
        long long tmp = arr[x];
        arr[x] = arr[y];
        arr[y] = tmp;
    }

    void upward(int cur){
        int parent = PARENT(cur);
        if (cur && arr[parent] > arr[cur]){
            swap(parent, cur);
            upward(parent);
        }
    }

    void downward(int cur){
        int left = LCHILD(cur);
        int right = RCHILD(cur);
        if (left < size){
            int min = left;
            if (right < size && arr[right] < arr[left]) min = right;
            if (arr[min] < arr[cur]){
                swap(min, cur);
                downward(min);
            }
        }
    }

    void push(long long weight){
        arr[size++] = weight;
        upward(size-1);
    }

    long long pop(){
        long long weight = arr[0];
        arr[0] = arr[--size];
        downward(0);
        return weight;
    }

    ~Heap(){
        delete[] arr;
    }

    long long *arr;
    int size;
};

int main(){
    int n;
    long long sum = 0;
    int i;
    Heap *heap;
    scanf("%d", &n);
    heap = new Heap(n);
    for (i = 0; i < n; i++){
        long long weight;
        scanf("%lld", &weight);
        heap->push(weight);
    }
    for (i = 0; i < n-1; i++){
        long long left = heap->pop();
        long long right = heap->pop();
        sum += left + right;
        heap->push(left + right);
    }
    printf("%lld\n", sum);

    delete heap;
    return 0;
}
