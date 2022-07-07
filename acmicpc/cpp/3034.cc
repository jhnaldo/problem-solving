#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int w, h, max, len;
    int i;

    scanf("%d %d %d", &n, &w, &h);
    max = w*w + h*h;
    for (i = 0; i < n; i++){
        scanf("%d", &len);
        printf ("%s\n", (len*len <= max?"DA":"NE"));
    }

    return 0;
}
