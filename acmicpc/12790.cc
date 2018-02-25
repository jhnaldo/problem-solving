#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int hp, mp, at, df;
    int hpv, mpv, atv, dfv;
    scanf("%d %d %d %d", &hp, &mp, &at, &df);
    scanf("%d %d %d %d", &hpv, &mpv, &atv, &dfv);
    hp = (hp + hpv < 1? 1: hp + hpv);
    mp = (mp + mpv < 1? 1: mp + mpv);
    at = (at + atv < 0? 0: at + atv);
    df += dfv;
    printf("%d\n", hp + 5*mp + 2*at + 2*df);
  }
  return 0;
}
