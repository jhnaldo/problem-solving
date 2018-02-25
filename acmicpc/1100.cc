#include <iostream>

using namespace std;

int main()
{
    char arr[9];
    const int SIZE = 8;
    int count = 0;
    for (int i = 0; i < SIZE; i++){
        cin >> arr;
        for (int j = i % 2; j < SIZE; j += 2){
            if (arr[j] == 'F')
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
