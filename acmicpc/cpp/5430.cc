#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        char func[100001], str[1000001];
        int len, k, i, cur, num;
        int from, to, direction;
        int arr[100001];

        scanf("%s", func);
        len = strlen(func);
        scanf("%d", &k);
        scanf("%s", str);

        cur = arr[0] = 0;
        for (i = 1; str[i]; i++) {
            if (str[i] < '0' || str[i] > '9') {
                arr[++cur] = 0;
            } else {
                arr[cur] *= 10;
                arr[cur] += str[i] - '0';
            }
        }

        from = 0;
        to = k;
        direction = 1;
        for (i = 0; func[i]; i++){
            switch(func[i]) {
                case 'R': direction *= -1; break;
                case 'D':
                    if (direction == 1) from++;
                    else to--;
            }
        }
        if (from > to) {
            printf("error\n");
        } else {
            printf("[");
            if (from < to){
                if (direction == 1) {
                    printf("%d", arr[from]);
                    for (from++; from < to; from++)
                        printf(",%d", arr[from]);
                } else {
                    printf("%d", arr[to-1]);
                    for (to--; from < to; to--)
                        printf(",%d", arr[to-1]);
                }
            }
            printf("]\n");
        }
    }
    return 0;
}
