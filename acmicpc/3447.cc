#include <iostream>

using namespace std;

int main(){
    while (true){
        string str;
        if (!getline(cin, str)) break;
        while (true){
            int i, length = str.length();
            for (i = 2; i < length; i++){
                if (str[i-2] == 'B'
                        && str[i-1] == 'U'
                        && str[i] == 'G'){
                    break;
                }
            }
            if (i >= length) break;
            str.erase(i-2, 3);
        }
        cout << str << endl;
    }
    return 0;
}
