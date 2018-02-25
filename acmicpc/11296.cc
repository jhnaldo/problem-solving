#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    double price, discount;
    char dot[2], coupon[2], pay[2];
    scanf("%lf %s %s %s", &price, dot, coupon, pay);
    switch(dot[0]) {
      case 'R': discount = 0.45; break;
      case 'G': discount = 0.30; break;
      case 'B': discount = 0.20; break;
      case 'Y': discount = 0.15; break;
      case 'O': discount = 0.10; break;
      case 'W': discount = 0.05; break;
    }
    price *= (1 - discount);
    if (coupon[0] == 'C') price *= 0.95;
    if (pay[0] == 'P') printf("$%.2lf\n", price);
    if (pay[0] == 'C') printf("$%.1lf0\n", price);
  }
  return 0;
}
