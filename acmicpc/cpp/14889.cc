#include <stdio.h>
#include <cmath>

int n;
bool team[20];
int score[20][20];
int min = 1e9;

int get_diff() {
  int total[2] = {};
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (team[i] == team[j]) {
        total[team[i]] += score[i][j] + score[j][i];
      }
    }
  }
  return (total[0] > total[1] ? (total[0] - total[1]) : (total[1] - total[0]));
}

void backtrack(int k, int x) {
  if (k == n / 2) {
    int diff = get_diff();
    min = (diff < min ? diff : min);
    return;
  }
  for (int y = x; y < n; y++) {
    team[y] = true;
    backtrack(k + 1, y + 1);
    team[y] = false;
  }
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++ ){
      scanf("%d", &score[i][j]);
    }
  }
  backtrack(0, 0);
  printf("%d\n", min);
  return 0;
}
