#include <iostream>

using namespace std;

int idx(char ch){
    if (ch >= 'A' && ch <= 'Z'){
        return ch-'A';
    }else{
        return ch-'a';
    }
}

int main()
{
    char str[1000001];
    int alphabet[26];
    int max = 0;
    char ch = '\0';
    cin >> str;

    for (int i = 0; str[i]; i++){
        alphabet[idx(str[i])]++;
    }

    for (int i = 0; i < 26; i++){
        if (max == alphabet[i]){
            ch = '?';
        }else if (max < alphabet[i]){
            max = alphabet[i];
            ch = 'A'+i;
        }
    }

    cout << ch << endl;
    return 0;
}
