#include <iostream>

using namespace std;

int main(){
    while (true){
        int i;
        string str;
        getline(cin, str);
        if (str[0] == '#') break;
        for (i = 0; str[i]; i++){
            switch (str[i]){
                case ' ': cout << "\%20"; break;
                case '!': cout << "\%21"; break;
                case '$': cout << "\%24"; break;
                case '%': cout << "\%25"; break;
                case '(': cout << "\%28"; break;
                case ')': cout << "\%29"; break;
                case '*': cout << "\%2a"; break;
                default: cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}
