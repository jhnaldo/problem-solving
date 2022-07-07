#include <iostream>

using namespace std;

int main(){
    int i;
    string str;
    for (i = 0; getline(cin, str); i++);
    cout << i << endl;
    return 0;
}
