#include <stdio.h>

int main(){
    int t;
    long long int tribble[68] = {0,};
    int i;

    tribble[0] = tribble[1] = 1;
    tribble[2] = 2;
    tribble[3] = 4;
    for (i = 4; i <= 67; i++)
        tribble[i] = tribble[i-1] + tribble[i-2] + tribble[i-3] + tribble[i-4];

    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%lld\n", tribble[n]);
    }
}
