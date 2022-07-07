#include <stdio.h>

char str[51];
int res, value;
bool add;

void update() {
  if (add) res += value;
  else res -= value;
  value = 0;
}

int main() {
  scanf("%s", str);
  add = true;
  for (int i = 0; str[i]; i++) {
    switch (str[i]) {
      case '+': update(); break;
      case '-': update(); add = false; break;
      default: value = value * 10 + (str[i] - '0'); break;
    }
  }
  update();
  printf("%d\n", res);
  return 0;
}
