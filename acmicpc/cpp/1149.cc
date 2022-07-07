#include <stdio.h>

using namespace std;

#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main()
{
  int n;
  int r, g, b;
  int min_r, min_g, min_b;
  scanf("%d", &n);

  min_r = min_g = min_b = 0;
  for (int i = 0; i < n; i++){
    int _r, _g, _b;
    scanf("%d %d %d", &r, &g, &b);
    _r = MIN(min_g, min_b) + r;
    _g = MIN(min_r, min_b) + g;
    _b = MIN(min_r, min_g) + b;
    min_r = _r;
    min_g = _g;
    min_b = _b;
  }

  printf("%d\n", MIN(MIN(min_r, min_g), min_b));
  return 0;
}
