#include <iostream>

using namespace std;

#define MIN(a,b) (a<b?a:b)

int main()
{
    int N, M;
    const int NUM_PACKAGE = 6;
    int min_package, min_each;
    int only_package_price, with_each_price, only_each_price;

    cin >> N >> M;
    cin >> min_package >> min_each;
    for (int i = 1; i < M; i++){
        int package, each;
        cin >> package >> each;
        min_package = MIN(package,min_package);
        min_each = MIN(each,min_each);
    }
    only_package_price = (N / NUM_PACKAGE + 1) * min_package;
    with_each_price = (N / NUM_PACKAGE) * min_package + (N % NUM_PACKAGE) * min_each;
    only_each_price = N * min_each;
    cout << MIN(MIN(only_package_price, with_each_price), only_each_price) << endl;
    return 0;
}
