#include <stdio.h>
#include <cmath>

int main(){
    int d, h, w;
    double db;
    scanf("%d %d %d", &d, &h, &w);
    db = sqrt(h*h+w*w);
    printf("%d %d\n", int(h*d/db), int(w*d/db));
    return 0;
}
