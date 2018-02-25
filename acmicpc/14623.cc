#include <stdio.h>

int main() {
  char n[31], m[31];
  char k[61], t;
  long long left = 0, right = 0, result;
  scanf("%s %s", n, m);
  for (int i = 0; n[i]; i++) {
    left *= 2;
    left += n[i] - '0';
  }
  for (int i = 0; m[i]; i++) {
    right *= 2;
    right += m[i] - '0';
  }

  result = left * right;

  for (t = 0; result; t++) {
    k[t] = result % 2 + '0';
    result /= 2;
  }
  for (int i = 0; i < t/2; i++) {
    char tmp = k[i];
    k[i] = k[t-i-1];
    k[t-i-1] = tmp;
  }
  k[t] = '\0';
  printf("%s\n", k);

  return 0;
}
