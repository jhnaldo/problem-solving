#include <iostream>
#include <stdio.h>

using namespace std;

#define ABS(x) ((x)<0?-(x):(x))

int diff(int arr1[26], int arr2[26]){
    int i, sum = 0;
    for (i = 0; i < 26; i++)
        sum += ABS(arr1[i]-arr2[i]);
    return sum;
}

void counting(string &str, int count[26]){
    int i;
    for (i = 0; str[i]; i++)
        count[str[i]-'a']++;
}

int main(){
    string tmp;
    int n, i;
    scanf("%d", &n);
    getline(cin, tmp);
    for (i = 0; i < n; i++){
        string p, q;
        int count_p[26] = {0,};
        int count_q[26] = {0,};
        getline(cin, p);
        getline(cin, q);
        counting(p, count_p);
        counting(q, count_q);
        printf ("Case #%d: %d\n", i+1, diff(count_p, count_q));
    }
    return 0;
}
