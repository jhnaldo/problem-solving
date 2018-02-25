#include <iostream>
#include <stdio.h>

using namespace std;

char lower(char ch){
    if (ch >= 'A' && ch <= 'Z') return ch - 'A' + 'a';
    return ch;
}

int main(){
    while (true){
        string str;
        char front;
        int i;
        getline(cin, str);
        if (str[0] == '*') break;
        front = lower(str[0]);
        for (i = 1; str[i]; i++){
            if (str[i] == ' ' && lower(str[i+1]) != front){
                printf("N\n");
                break;
            }
        }
        if (!str[i]){
            printf("Y\n");
        }
    }
    return 0;
}
