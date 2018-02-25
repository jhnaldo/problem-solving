#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T-- > 0){
        int x, y, k;
        cin >> x >> y;
        k = (int)sqrt(y-x);
        if (k * k == y - x) cout << 2*k-1 << endl;
        else if (k * (k + 1) >= y - x) cout << 2*k << endl;
        else cout << 2 * k + 1 << endl;
    }
    return 0;
}
