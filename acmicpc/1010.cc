#include <iostream>

using namespace std;

int prime[] = {2,3,5,7,11,13,17,19,23,29};
int size = 10;
int factor[31][10];

int pow(int n, int k){
    if(k==0) return 1;
    else return n * pow(n,k-1);
}

int toInt(int arr[]){
    int i;
    int result = 1;
    for(i=0;i<10;i++){
        result *= pow(prime[i],arr[i]);
    }
    return result;
}

int* div(int *left, int *right){
    int i;
    int *result = new int[10];
    for(i=0;i<10;i++){
        result[i] = left[i] - right[i];
    }
    return result;
}

int main()
{
    int T;
    int i, j;

    for(i=0;i<10;i++){
        factor[1][i]=0;
    }

    for(i=2;i<=30;i++){
        int n = i;
        for(j=0;j<10;j++){
            factor[i][j]=factor[i-1][j];
            while(n%prime[j]==0){
                factor[i][j]++;
                n/=prime[j];
            }
        }
    }

    cin >> T;
    for (i=0;i<T;i++){
        int N, M;
        cin >> N >> M;

        int *res1 = div(factor[M],factor[N]);
        int *res2 = div(res1,factor[M-N]);
        cout << toInt(res2) << endl;
        delete[] res1;
        delete[] res2;
    }
    return 0;
}
