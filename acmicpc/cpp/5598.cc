#include <stdio.h>

int main() {
    char str[1001];
    scanf("%s", str);
    for (int i = 0; str[i]; i++){
        str[i] -= 3;
        if (str[i] < 'A') str[i] += 26;
    }
    printf("%s\n", str);
    return 0;
}
