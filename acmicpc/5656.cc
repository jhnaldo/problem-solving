#include <stdio.h>
#include <string.h>

int main(){
    int k = 1;
    while (true){
        int left, right;
        char op[3];
        scanf("%d %s %d", &left, op, &right);
        if (op[0] == 'E') break;
        printf("Case %d: ", k);
        if (!strcmp(op, ">")){
            printf("%s\n", (left>right?"true":"false"));
        }else if (!strcmp(op, ">=")){
            printf("%s\n", (left>=right?"true":"false"));
        }else if (!strcmp(op, "<")){
            printf("%s\n", (left<right?"true":"false"));
        }else if (!strcmp(op, "<=")){
            printf("%s\n", (left<=right?"true":"false"));
        }else if (!strcmp(op, "==")){
            printf("%s\n", (left==right?"true":"false"));
        }else if (!strcmp(op, "!=")){
            printf("%s\n", (left!=right?"true":"false"));
        }
        k++;
    }
    return 0;
}
