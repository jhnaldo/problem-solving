#include <iostream>

using namespace std;

bool is_han_num(int num){
    int arr[4];
    int size, diff;
    for (size = 0; num > 0; size++){
        arr[size] = num % 10;
        num /= 10;
    }
    if (size <= 2) return true;
    diff = arr[1] - arr[0];
    for (int i = 2; i < size; i++){
        if (diff != arr[i] - arr[i-1])
            return false;
    }
    return true;
}

int main()
{
    int N;
    int count = 0;
    cin >> N;
    for (int i = 1; i <= N; i++){
        if (is_han_num(i)) count++;
    }
    cout << count << endl;
    return 0;
}
