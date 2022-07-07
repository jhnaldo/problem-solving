#include <stdio.h>

int main() {
  int n;
  int trial[3][200];
  int count[3][100] = {0, };
  int score[200] = {0, };
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &trial[j][i]);
      trial[j][i]--;
      count[j][trial[j][i]]++;
    }
  }

  for (int i = 0; i < n; i++) {
    int score = 0;
    for (int j = 0; j < 3; j++) {
      if (count[j][trial[j][i]] == 1) {
        score += trial[j][i] + 1;
      }
    }
    printf("%d\n", score);
  }

  return 0;
}
