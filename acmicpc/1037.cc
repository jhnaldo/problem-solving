#include <iostream>

using namespace std;

int main()
{
    int n, min, max;
    int i, temp;
    cin >> n >> min;
    max = min;
    for (i=0;i<n-1;i++){
        cin >> temp;
        min = (min>temp?temp:min);
        max = (max<temp?temp:max);
    }
    cout << min*max;
}
