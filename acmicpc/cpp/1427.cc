#include <stdio.h>
#include <string.h>

void sort(char arr[], int size){
    int i, j;
    for (i = 0; i < size; i++){
        int max = i;
        for (j = i+1; j < size; j++){
            if (arr[max] < arr[j])
                max = j;
        }
        char temp = arr[max];
        arr[max] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    char num[21];

    scanf("%s", num);
    sort(num, strlen(num));
    printf("%s\n", num);
}
