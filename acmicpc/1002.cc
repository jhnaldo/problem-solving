#include <iostream>

using namespace std;

int main()
{
    int num, k;
    int x1, y1, r1;
    int x2, y2, r2;
    int sq_dist, sq_add, sq_sub;

    cin >> num;
    while(num>0){
        cin >> x1 >> y1 >> r1;
        cin >> x2 >> y2 >> r2;

        sq_add = (r1+r2) * (r1+r2);
        sq_sub = (r1-r2) * (r1-r2);
        sq_dist = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);

        if ( sq_add < sq_dist || sq_sub > sq_dist ){
            cout << 0 << endl;
        }else if ( sq_dist == 0 && r1 == r2 ){
            cout << -1 << endl;
        }else if ( sq_add == sq_dist || sq_sub == sq_dist ){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }

        num--;
    }

    return 0;
}
