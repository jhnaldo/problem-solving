#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int X;
    int n, k;
    cin >> X;

    n = ceil((sqrt(8 * X + 1) - 3) / 2);
    k = X - n * (n + 1) / 2;

    if (n % 2 == 0){
        cout << n + 2 - k << '/' << k << endl;
    }else{
        cout << k << '/' << n + 2 - k << endl;
    }
    return 0;
}
