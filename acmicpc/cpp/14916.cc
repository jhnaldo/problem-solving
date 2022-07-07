#include <stdio.h>

using namespace std;

#define SIZE 100000
#define MIN(a,b) ((a)<(b)?(a):(b))
#define INF (int)1e9

int least[SIZE+1] = { 0, INF, 1, INF, 2, 1, };

void preprocess() {
  for (int i = 6; i <= SIZE; i++) {
    least[i] = INF;
    least[i] = MIN(least[i], least[i-2] + 1);
    least[i] = MIN(least[i], least[i-5] + 1);
  }
}

int main() {
  int n;
  preprocess();
  scanf("%d", &n);
  if (least[n] == INF) printf("-1\n");
  else printf("%d\n", least[n]);
  return 0;
}
