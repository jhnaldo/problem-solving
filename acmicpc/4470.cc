#include <iostream>

using namespace std;

int main(){
    int n, i;
    string tmp;
    cin >> n;
    getline(cin, tmp);
    for (i = 1; i <= n; i++){
        string str;
        getline(cin, str);
        cout << i << ". " << str << endl;
    }
    return 0;
}
