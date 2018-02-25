#include <iostream>

using namespace std;

#define MIN(a,b) (a<b?a:b)
#define MIN_4(a,b,c,d) MIN(a,MIN(b,MIN(c,d)))

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    cout << MIN_4(x,y,w-x,h-y);
    return 0;
}
