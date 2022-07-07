#include <stdio.h>

enum State { Empty, Apple, Fill };
State map[100][100];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

struct Pos {
  int x, y;
  int dir;
  Pos(int x, int y, int dir): x(x), y(y), dir(dir) {}
  void next() { x += dx[dir]; y += dy[dir]; }
  bool valid(int n) { return 0 <= x && x < n && 0 <= y && y < n && map[x][y] != Fill; }
};

int n, k, l;
int time[100];
bool clockwise[100];
Pos head(0, 0, 0), tail(0, 0, 0);
int head_time, tail_time;
int head_i, tail_i;

void input() {
  scanf("%d", &n);
  scanf("%d", &k);
  for (int i = 0; i < k; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    map[x - 1][y - 1] = Apple;
  }
  scanf("%d", &l);
  for (int i = 0; i < l; i++) {
    int t;
    char str[2];
    char &ch = str[0];
    scanf("%d %s", &time[i], str);
    clockwise[i] = ch == 'D';
  }
  map[0][0] = Fill;
}

void process() {
  while (true) {
    head_time++;
    head.next();

    while (time[head_i] < head_time) head_i++;
    if (time[head_i] == head_time) {
      if (clockwise[head_i++]) {
        head.dir = (head.dir + 1) % 4;
      } else {
        head.dir = (head.dir + 3) % 4;
      }
    }

    if (!head.valid(n)) break;
    State &st = map[head.x][head.y];
    switch (st) {
      case Empty:
        map[tail.x][tail.y] = Empty;
        tail.next();
        tail_time++;
        while (time[tail_i] < tail_time) tail_i++;
        if (time[tail_i] == tail_time) {
          if (clockwise[tail_i++]) {
            tail.dir = (tail.dir + 1) % 4;
          } else {
            tail.dir = (tail.dir + 3) % 4;
          }
        }
      case Apple:
        st = Fill;
        break;
      case Fill:
        break;
    }
  }
}

void output() {
  printf("%d\n", head_time);
}

int main() {
  input();
  process();
  output();
  return 0;
}
