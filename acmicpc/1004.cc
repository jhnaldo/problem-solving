#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

bool check(Point p, int r, Point q) {
    int x_diff = p.x-q.x;
    int y_diff = p.y-q.y;
    int dist_sq = x_diff*x_diff + y_diff*y_diff;
    int r_sq = r * r;

    return r_sq > dist_sq;
}

int count(bool *p, bool *q, int size) {
    int k = 0;
    for (int i=0; i<size; i++) {
        k += (p[i]!=q[i]?1:0);
    }
    return k;
}

int main()
{
    int n;
    cin >> n;

    while (n-- > 0) {
        int k;
        Point start, end;
        bool *start_st, *end_st;

        cin >> start.x >> start.y >> end.x >> end.y;
        cin >> k;
        start_st = new bool[k];
        end_st = new bool[k];

        for (int i=0;i<k;i++) {
            Point p;
            int r;
            cin >> p.x >> p.y >> r;
            start_st[i] = check(p,r,start);
            end_st[i] = check(p,r,end);
        }

        cout << count(start_st, end_st, k) << endl;

        delete[] start_st;
        delete[] end_st;

    }
    return 0;
}
