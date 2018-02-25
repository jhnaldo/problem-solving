#include <iostream>

using namespace std;

int main()
{
    int arr[10][4] = {
        {10},
        {1},
        {2,4,8,6},
        {3,9,7,1},
        {4,6},
        {5},
        {6},
        {7,9,3,1},
        {8,4,2,6},
        {9,1},
    };

    int len[10] = {1,1,4,4,2,1,1,4,4,2};

    int T;
    cin >> T;

    while(T>0){

        int a, b;
        int k;
        int i;
        cin >> a >> b;

        a %= 10;
        b--;
        b %= len[a];

        cout << arr[a][b] << endl;

        T--;
    }
}
