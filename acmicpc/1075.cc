#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int N, F;
    int remainder;

    cin >> N >> F;
    remainder = (N-N%100)%F;
    printf("%02d\n", (remainder?F-remainder:0));

    return 0;
}
