#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N;
    char filename[51];
    char pattern[51];
    int i,j;

    cin >> N;
    cin >> pattern;
    for(i=1;i<N;i++){
        cin >> filename;
        for(j=0;filename[j];j++){
            if(pattern[j]!=filename[j])
                pattern[j] = '?';
        }
        pattern[j]='\0';
    }
    cout << pattern << endl;
    return 0;
}
