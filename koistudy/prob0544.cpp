#include <stdio.h>
#include <stdlib.h>

class Point{
public:
    Point(int _x, int _y, int _z){
        x = _x; y = _y; z = _z;
    }

    void display(){
        printf("%d %d %d\n", x, y, z);
    }

    int x;
    int y;
    int z;
};

int kind;
int comp(const void* left, const void* right){
    Point *lp = *(Point**)left;
    Point *rp = *(Point**)right;

    switch(kind){
        case 1: return lp->x - rp->x;
        case 2: return rp->x - lp->x;
        case 3: return lp->y - rp->y;
        case 4: return rp->y - lp->y;
        case 5: return lp->z - rp->z;
        case 6: return rp->z - lp->z;
    }
    return 0;
}

int main(){
    Point **arr;
    int size;
    int i;

    scanf("%d", &size);
    arr = new Point*[size];
    for (i = 0; i < size; i++){
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        arr[i] = new Point(x, y, z);
    }
    scanf("%d", &kind);

    qsort(arr, size, sizeof(Point*), comp);

    for (i = 0; i < size; i++){
        arr[i]->display();
        delete arr[i];
    }
    delete[] arr;
    return 0;
}
