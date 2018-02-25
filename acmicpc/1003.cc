#include <iostream>

using namespace std;

int fn;
int fn_1;
int fn_2;

int main()
{
    int n;
    cin >> n;

    while(n-->0) {
        int k;
        cin >> k;
        if (k==0) cout << 1 << " " << 0 << endl;
        else if (k==1) cout << 0 << " " << 1 << endl;
        else {
            fn_2 = 0;
            fn_1 = 1;
            fn = 1;
            while(k-->2) {
                fn_2 = fn_1;
                fn_1 = fn;
                fn = fn_2+fn_1;
            }
            cout << fn_1 << " " << fn << endl;
        }
    }
    return 1;
}
