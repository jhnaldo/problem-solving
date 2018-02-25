#include <iostream>
#include <cstring>

using namespace std;

int val(char *arr){
    if(strcmp(arr,"black")==0)  return 0;
    if(strcmp(arr,"brown")==0)  return 1;
    if(strcmp(arr,"red")==0)    return 2;
    if(strcmp(arr,"orange")==0) return 3;
    if(strcmp(arr,"yellow")==0) return 4;
    if(strcmp(arr,"green")==0)  return 5;
    if(strcmp(arr,"blue")==0)   return 6;
    if(strcmp(arr,"violet")==0) return 7;
    if(strcmp(arr,"grey")==0)   return 8;
    if(strcmp(arr,"white")==0)  return 9;
}

int main()
{
    char color[3][7];
    int result[3];
    int i;

    for (i=0;i<3;i++){
        cin >> color[i];
        result[i] = val(color[i]);
    }

    if (result[0]==0){
        if(result[1]==0){
            cout << 0 << endl;
            return 0;
        }
        cout << result[1];
    }else{
        cout << result[0] << result[1];
    }

    for(i=0;i<result[2];i++) cout << 0;
    cout << endl;

    return 0;
}
