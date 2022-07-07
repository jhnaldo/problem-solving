#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        char prev[101], word[101];
        int plen, wlen, i;
        int pcount[256] = {0,}, wcount[256] = {0,};
        scanf("%s %s", prev, word);
        plen = strlen(prev);
        wlen = strlen(word);
        if (plen != wlen){
            printf("%s & %s are NOT anagrams.\n", prev, word);
            continue;
        }

        for (i = 0; i < plen; i++){
            pcount[prev[i]]++;
            wcount[word[i]]++;
        }
        for (i = 0; i < 256; i++){
            if (pcount[i] != wcount[i]){
                printf("%s & %s are NOT anagrams.\n", prev, word);
                break;
            }
        }
        if (i==256)
            printf("%s & %s are anagrams.\n", prev, word);
    }
    return 0;
}
