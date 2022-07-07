#include <stdio.h>
#include <string.h>

void reverse(char word[], int size){
    int i;
    for (i = 0; i < size/2; i++){
        char tmp = word[i];
        word[i] = word[size-i-1];
        word[size-i-1] = tmp;
    }
}

int main(){
    int n, index;
    char words[20000][51], before[51] = "";
    int output[20000];
    int bucket[26][20000];
    int size[20000], bsize[26] = {0,}, osize = 0;
    int i, j, k;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%s", words[i]);
        size[i] = strlen(words[i]);
        reverse(words[i], size[i]);
        index = words[i][0]-'a';
        bucket[index][bsize[index]++] = i;
    }

    for (k = 1; k <= 50; k++){
        osize = 0;
        for (i = 0; i < 26; i++){
            for (j = 0; j < bsize[i]; j++){
                index = bucket[i][j];
                if (size[index] == k){
                    if (strcmp(before, words[index])){
                        strcpy(before, words[index]);
                        reverse(words[index], size[index]);
                        printf("%s\n", words[index]);
                    }
                }else{
                    output[osize++] = index;
                }
            }
            bsize[i] = 0;
        }
        for (i = 0; i < osize; i++){
            index = words[output[i]][k]-'a';
            bucket[index][bsize[index]++] = output[i];
        }
    }

    return 0;
}
