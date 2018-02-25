#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[1000001];
    int count;

    cin.getline(str, 1000001);
    count = (!str[0] || str[0]==' '?0:1);
    for (int i = 1; str[i]; i++){
        if (str[i] != ' ' && str[i-1] == ' ') count ++;
    }
    cout << count << endl;
    return 0;
}
