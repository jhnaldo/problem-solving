#include <stdio.h>

class Node {
public:
  Node* next;
  Node* prev;
  int data;

  Node() {
    data = 0;
    next = prev = NULL;
  }
};

int main() {
  int n, m;
  Node node[200000];
  Node* head;
  scanf("%d %d", &n, &m);

  head = node;
  for (int i = 0; i < n; i++) {
    node[i].data = i + 1;
    if (i < n - 1) node[i].next = node + i + 1;
    if (i) node[i].prev = node + i - 1;
  }

  while (m--) {
    int k;
    Node *cur;
    scanf("%d", &k);

    cur = node + k - 1;
    if (cur->prev) {
      cur->prev->next = cur->next;
      if (cur->next) cur->next->prev = cur->prev;
      cur->prev = NULL;
      cur->next = head;
      head->prev = cur;
      head = cur;
    }
  }

  Node *ptr = head;
  while (ptr) {
    printf("%d\n", ptr->data);
    ptr = ptr->next;
  }

  return 0;
}
