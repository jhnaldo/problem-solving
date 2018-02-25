#include <stdio.h>

#define PARENT(x) (((x)-1)/2)
#define ISROOT(x) ((x) == 0)

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

class Heap {
public:
    Heap(int _size){
        size = 0;
        arr = new int[_size];
    }

    void push(int data){
        int parent = PARENT(size);
        int idx = size;
        arr[size] = data;
        while (!ISROOT(idx) && arr[parent] < arr[idx]){
            swap(arr[parent], arr[idx]);
            idx = parent;
            parent = PARENT(parent);
        }
        size++;
    }

    void display(){
        int i;
        for (i = 0; i < size; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }

    int *arr;
    int size;
};

int main(){
    Heap *heap;
    int n, i;
    scanf("%d", &n);
    heap = new Heap(n);
    for (i = 0; i < n; i++){
        int data;
        scanf("%d", &data);
        heap->push(data);
    }
    heap->display();
    return 0;
}
