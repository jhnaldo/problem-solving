#include <iostream>

using namespace std;

int main(){
    int n;
    string tmp;
    cin >> n;
    getline(cin, tmp);
    while (n--){
        string str;
        getline(cin, str);
        if (str[0]>= 'a' && str[0] <= 'z') str[0] -= 'a'-'A';
        cout << str << endl;
    }
}
