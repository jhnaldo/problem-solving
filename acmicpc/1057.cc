#include <iostream>

using namespace std;

#define NEXT(a) ((a + 1) / 2)

int main()
{
    int N, P, Q;
    int count = 0;
    cin >> N >> P >> Q;
    while(P!=Q){
        P = NEXT(P);
        Q = NEXT(Q);
        count++;
    }
    cout << count << endl;
    return 0;
}
