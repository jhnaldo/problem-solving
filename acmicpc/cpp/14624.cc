#include <stdio.h>

void display(char ch, int k) {
  for (int i = 0; i < k; i++) printf("%c", ch);
}
void newline() { printf("\n"); }

int main() {
  int n;
  scanf("%d", &n);
  if (n % 2) {
    display('*', n);
    newline();
    display(' ', n / 2);
    display('*', 1);
    newline();
    for (int i = 0; i < n / 2; i++) {
      display(' ', n / 2 - i - 1);
      display('*', 1);
      display(' ', i * 2 + 1);
      display('*', 1);
      newline();
    }
  } else {
    printf("I LOVE CBNU\n");
  }
  return 0;
}
