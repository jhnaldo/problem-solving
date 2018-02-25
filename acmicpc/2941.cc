#include <stdio.h>

int main(){
    char str[8][4] = {
        "c=",
        "c-",
        "dz=",
        "d-",
        "lj",
        "nj",
        "s=",
        "z="
    };
    char input[301];
    int i, count;

    scanf("%s", input);
    for (i = 0, count = 0; input[i];){
        int p, q;
        for (p = 0; p < 8; p++){
            for (q = 0; str[p][q] && str[p][q] == input[i+q]; q++);
            if (!str[p][q]){
                i += q;
                count++;
                break;
            }
        }
        if (p == 8){
            count++;
            i++;
        }
    }
    printf("%d\n", count);

    return 0;
}
