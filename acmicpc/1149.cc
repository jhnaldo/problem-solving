#include <iostream>

using namespace std;

#define MIN(a,b) (a<b?a:b)

int main()
{
    int N;
    int r, g, b;
    int min_r, min_g, min_b;
    cin >> N;

    for (int i = 0; i < N; i++){
        int _r, _g, _b;
        cin >> r >> g >> b;
        _r = MIN(min_g, min_b) + r;
        _g = MIN(min_r, min_b) + g;
        _b = MIN(min_r, min_g) + b;
        min_r = _r;
        min_g = _g;
        min_b = _b;
    }

    cout << MIN(MIN(min_r, min_g), min_b) << endl;
    return 0;
}
