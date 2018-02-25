#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    string tmp;
    int n;
    scanf("%d", &n);
    getline(cin, tmp);
    while(n--){
        int i;
        string str;
        getline(cin, str);
        for (i = 0; str[i] != ' '; i++);
        for (i++; str[i] != ' '; i++);
        str[i] = '\0';
        cout << str.c_str()+i+1 << " " << str.c_str() << endl;
    }
    return 0;
}
