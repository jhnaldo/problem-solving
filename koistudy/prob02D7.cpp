#include "lib.h"
#include <stdlib.h>

int comp(const void* left, const void* right){
    return *(double*)left - *(double*)right;
}

int main(void)
{
    int size = Sizef();
    double *arr = new double[size];
    int i;
    for (i = 0; i < size; i++)
        arr[i] = Getf(i);

    qsort(arr, size, sizeof(double), comp);

    for (i = 0; i < size; i++)
        Putf(arr[i], i);

    done();
    return 0;
}
