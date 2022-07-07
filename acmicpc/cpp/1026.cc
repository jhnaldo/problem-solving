#include <iostream>

using namespace std;

void selection_sort(int a[], int n){
    int i, j;
    for (i=0;i<n;i++){
        int min = i;
        for (j=i+1;j<n;j++){
            if (a[min] > a[j]){
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}

int main()
{
    int n, sum;
    int *a, *b;
    int i;
    cin >> n;
    a = new int[n];
    b = new int[n];
    for (i=0;i<n;i++) cin >> a[i];
    for (i=0;i<n;i++) cin >> b[i];

    selection_sort(a,n);
    selection_sort(b,n);

    sum = 0;
    for (i=0;i<n;i++){
        sum += a[i] * b[n-i-1];
    }

    cout << sum;

    delete[] a, b;
    return 0;
}
