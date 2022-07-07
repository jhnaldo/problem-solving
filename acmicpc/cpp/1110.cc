#include <iostream>

using namespace std;

int next(int k){
    int a = k / 10;
    int b = k % 10;
    return b * 10 + (a + b) % 10;
}

int main()
{
    int N;
    int count = 1;
    cin >> N;

    for (int k = next(N); k != N; k = next(k), count++);
    cout << count << endl;
    return 0;
}
