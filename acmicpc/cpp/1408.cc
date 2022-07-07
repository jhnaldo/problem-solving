#include <stdio.h>

int main(){
    int bh, bm, bs;
    int ah, am, as;
    int ih, im, is;

    scanf("%d:%d:%d", &bh, &bm, &bs);
    scanf("%d:%d:%d", &ah, &am, &as);
    ih = ah-bh;
    im = am-bm;
    is = as-bs;
    if (is < 0){
        is += 60;
        im--;
    }
    if (im < 0){
        im += 60;
        ih--;
    }
    if (ih < 0){
        ih += 24;
    }
    printf("%02d:%02d:%02d\n", ih, im, is);
    return 0;
}
