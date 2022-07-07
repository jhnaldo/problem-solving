#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    while (true){
        string str;
        int count[26] = {0,}, i;
        getline(cin, str);
        if (str[0] == '*' && str[1] == '\0') break;
        for (i = 0; str[i]; i++){
            if (str[i] >= 'a' && str[i] <= 'z')
                count[str[i]-'a']++;
        }
        for (i = 0; i < 26; i++){
            if (!count[i]){
                printf("N\n");
                break;
            }
        }
        if (i == 26) printf("Y\n");
    }
    return 0;
}
