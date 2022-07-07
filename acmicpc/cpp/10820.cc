#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;

    while (getline(cin, str)){
        int i, l, u, n, s;
        l = u = n = s = 0;
        for (i = 0; str[i]; i++){
            if (str[i] >= 'a' && str[i] <= 'z') l++;
            else if (str[i] >= 'A' && str[i] <= 'Z') u++;
            else if (str[i] >= '0' && str[i] <= '9') n++;
            else if (str[i] == ' ') s++;
        }
        printf("%d %d %d %d\n", l, u, n, s);
    };
    return 0;
}
