#include <stdio.h>

struct Wheel {
  bool shape[8];
  int cur;
  Wheel(): cur(0) {}
  bool query(int k) { return shape[(cur + k) % 8]; }
  bool top() { return query(0); }
  bool left() { return query(6); }
  bool right() { return query(2); }
  void rotate(int k) { cur += k + 8; cur %= 8; }
};

Wheel wheel[4];
int n;
int idx[100], direction[100];

void input() {
  for (int i = 0; i < 4; i++) {
    char str[9];
    scanf("%s", str);
    for (int j = 0; j < 8; j++)
      wheel[i].shape[j] = str[j] == '1';
  }
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &idx[i], &direction[i]);
    idx[i]--; direction[i] = -direction[i];
  }
}

void apply(int k, int d) {
  bool l = k > 0 && wheel[k].left() != wheel[k - 1].right();
  bool r = k < 3 && wheel[k].right() != wheel[k + 1].left();
  wheel[k].rotate(d);
  for (int i = k - 1, e = -d; l; i--, e = -e) {
    l = i > 0 && wheel[i].left() != wheel[i - 1].right();
    wheel[i].rotate(e);
  }
  for (int i = k + 1, e = -d; r; i++, e = -e) {
    r = i < 3 && wheel[i].right() != wheel[i + 1].left();
    wheel[i].rotate(e);
  }
}

void process() {
  for (int i = 0; i < n; i++)
    apply(idx[i], direction[i]);
}

void output() {
  int res = 0;
  for (int i = 3; i >= 0; i--) {
    res <<= 1;
    res += wheel[i].top();
  }
  printf("%d\n", res);
}

int main() {
  input();
  process();
  output();
  return 0;
}
