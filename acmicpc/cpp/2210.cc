#include <stdio.h>
#include <stack>

using namespace std;

class Pos {
public:
  int x;
  int y;
  int remain;
  int value;
  Pos(int _x, int _y, int _remain, int _value): x(_x), y(_y), remain(_remain), value(_value) {}
};

int main() {
  int arr[5][5];
  stack<Pos> stack;
  bool* check = new bool[1000000]();
  int count = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      stack.push(Pos(i, j, 5, arr[i][j]));
      while (!stack.empty()) {
        Pos pos = stack.top();
        stack.pop();
        int x = pos.x;
        int y = pos.y;
        int remain = pos.remain;
        int value = pos.value;
        if (!remain) {
          if (!check[value]) {
            check[value] = true;
            count++;
          }
        } else {
          if (x > 0) stack.push(Pos(x-1, y, remain-1, value * 10 + arr[x-1][y]));
          if (x < 4) stack.push(Pos(x+1, y, remain-1, value * 10 + arr[x+1][y]));
          if (y > 0) stack.push(Pos(x, y-1, remain-1, value * 10 + arr[x][y-1]));
          if (y < 4) stack.push(Pos(x, y+1, remain-1, value * 10 + arr[x][y+1]));
        }
      }
    }
  }
  printf("%d\n", count);
  delete[] check;
  return 0;
}
