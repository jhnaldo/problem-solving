#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string tmp;
    cin >> n;
    getline(cin, tmp);
    while (n--){
        bool check[26] = {0,};
        int i, count = 0;
        string str;
        getline(cin, str);

        for (i = 0; str[i]; i++){
            int val = -1;
            if (str[i] >= 'a' && str[i] <= 'z'){
                val = str[i]-'a';
            }else if (str[i] >= 'A' && str[i] <= 'Z'){
                val = str[i]-'A';
            }
            if (val >= 0){
                if (!check[val]){
                    count++;
                    check[val] = true;
                }
            }
        }
        if (count == 26){
            cout << "pangram" << endl;
        }else{
            cout << "missing ";
            for (i = 0; i < 26; i++){
                if (!check[i])
                    cout << (char)('a'+i);
            }
            cout << endl;
        }
    }
    return 0;
}
