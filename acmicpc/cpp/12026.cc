#include <stdio.h>
#include <string.h>

char before(char ch) {
  switch(ch) {
    case 'B': return 'J';
    case 'O': return 'B';
    case 'J': return 'O';
  }
  return '\0';
}

int main() {
  int n;
  char str[1001];
  int size, dist[1000];
  scanf("%d", &n);
  scanf("%s", str);
  size = strlen(str);
  dist[0] = 0;
  for (int i = 1; i < size; i++) {
    dist[i] = -1;
    char ch = before(str[i]);
    for (int j = 0; j < i; j++) {
      if (str[j] == ch && dist[j] != -1) {
        int k = dist[j] + (i-j) * (i-j);
        if (dist[i] == -1 || dist[i] > k) dist[i] = k;
      }
    }
  }
  printf("%d\n", dist[size-1]);
  return 0;
}
