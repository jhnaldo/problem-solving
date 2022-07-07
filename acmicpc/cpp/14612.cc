#include <stdio.h>
#include <cstring>
#include <stdlib.h>

class Order {
public:
  int k;
  int time;
  bool complete;

  Order(): k(0), time(0), complete(false) {}
};

int compare(const void* left, const void* right) {
  Order *l = (Order *) left;
  Order *r = (Order *) right;
  int diff = l->time - r->time;
  if (diff) return diff;
  return l->k - r->k;
}

int main() {
  int n, m;
  Order order[100];
  int size = 0;

  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    char command[11];
    bool check = false;
    scanf("%s", command);
    if (strcmp(command, "order") == 0) {
      int k, time;
      scanf("%d %d", &k, &time);
      order[size].k = k;
      order[size].time = time;
      size++;
    } else if (strcmp(command, "complete") == 0) {
      int k;
      scanf("%d", &k);
      for (int j = 0; j < size; j++) {
        if (order[j].k == k && !order[j].complete) {
          order[j].complete = true;
          break;
        }
      }
    } else {
      qsort(order, size, sizeof(Order), compare);
    }
    for (int j = 0; j < size; j++) {
      if (!order[j].complete) {
        printf("%d ", order[j].k);
        check = true;
      }
    }
    if (!check) printf("sleep");
    printf("\n");
  }

  return 0;
}
