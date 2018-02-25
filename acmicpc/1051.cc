#include <iostream>

using namespace std;

#define MIN(a,b) (a<b?a:b)
#define SAME(x,y,p,q) (array[x][y] == array[p][q])

int main()
{
    int N, M;
    int **array;
    char *ch_arr;
    cin >> N >> M;
    array = new int*[N];
    ch_arr = new char[M+1];
    for (int i = 0; i < N; i++){
        array[i] = new int[M];
        cin >> ch_arr;
        for (int j = 0; j < M; j++){
            array[i][j] = ch_arr[j] - '0';
        }
    }

    for (int k = MIN(N,M)-1; k >= 0; k--){
        for (int i = k; i < N; i++){
            for (int j = k; j < M; j++){
                if (SAME(i-k,j-k,i,j-k) && SAME(i,j-k,i,j) && SAME(i,j,i-k,j)){
                    cout << (k + 1) * (k + 1) << endl;

                    for (int i = 0; i < N; i++){
                        delete array[i];
                    }
                    delete[] array;
                    return 0;
                }
            }
        }
    }
    return -1;
}
