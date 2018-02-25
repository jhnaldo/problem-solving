#include <stdio.h>
#include <string.h>

int main(){
    int count[10] = {0,};
    char number[100001];
    int size, sum, i, j;

    scanf("%s", number);
    size = strlen(number);

    sum = 0;
    for (i = 0; i < size; i++){
        int k = number[i]-'0';
        sum += k;
        count[k]++;
    }
    if (!count[0] || sum % 3){
        printf("-1\n");
    }else{
        for (i = 9; i >= 0; i--){
            for (j = 0; j < count[i]; j++) printf("%d", i);
        }
        printf("\n");
    }
}
