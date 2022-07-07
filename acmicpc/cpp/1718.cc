#include <iostream>

using namespace std;

int main(){
    string str, key;
    int i, j;

    getline(cin, str);
    cin >> key;
    for (i = j = 0; str[i]; i++, j = (key[j+1]?j+1:0)){
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 'a';
            str[i] += 26 - (key[j] - 'a' + 1);
            str[i] %= 26;
            str[i] += 'a';
        }
    }
    cout << str << endl;
    return 0;
}
