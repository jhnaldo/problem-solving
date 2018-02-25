#include <stdio.h>
#include <string.h>

int main(){
    int size, ssize, i;
    char str[31];
    int stack[30];

    scanf("%s", str);
    size = strlen(str);
    ssize = 0;
    for (i = 0; i < size; i++){
        switch(str[i]){
            case '(':
            case '[':
                stack[ssize++] = -str[i];
                break;
            case ')':
                if (ssize && stack[ssize-1] >= 0){
                    if (ssize-1 && stack[ssize-2] == -'('){
                        if (ssize-2 && stack[ssize-3] >= 0){
                            stack[ssize-3] += stack[ssize-1]*2;
                            ssize -= 2;
                        }else{
                            stack[ssize-2] = stack[ssize-1]*2;
                            ssize--;
                        }
                    }else{
                        printf ("0\n");
                        return 0;
                    }
                }else if (ssize && stack[ssize-1] == -'('){
                    if (ssize-1 && stack[ssize-2] >= 0){
                        stack[ssize-2] += 2;
                        ssize--;
                    }else{
                        stack[ssize-1] = 2;
                    }
                }else{
                    printf ("0\n");
                    return 0;
                }
                break;
            case ']':
                if (ssize && stack[ssize-1] >= 0){
                    if (ssize-1 && stack[ssize-2] == -'['){
                        if (ssize-2 && stack[ssize-3] >= 0){
                            stack[ssize-3] += stack[ssize-1]*3;
                            ssize -= 2;
                        }else{
                            stack[ssize-2] = stack[ssize-1]*3;
                            ssize--;
                        }
                    }else{
                        printf ("0\n");
                        return 0;
                    }
                }else if (ssize && stack[ssize-1] == -'['){
                    if (ssize-1 && stack[ssize-2] >= 0){
                        stack[ssize-2] += 3;
                        ssize--;
                    }else{
                        stack[ssize-1] = 3;
                    }
                }else{
                    printf ("0\n");
                    return 0;
                }
                break;
            defualt:
                printf ("0\n");
                return 0;
        }
    }
    printf ("%d\n", (ssize == 1 && stack[0] >= 0? stack[0]:0));
    return 0;
}
