#include <stdio.h>

class Node {
public:
  Node(int _data) {
    data = _data;
    prev = next = NULL;
  }

  int data;
  Node *prev;
  Node *next;
};

class Q {
public:
  Q() {
    cur = NULL;
  }

  void add(int data) {
    Node *node = new Node(data);
    if (cur == NULL) {
      cur = node;
      node->next = node->prev = node;
    } else {
      node->prev = cur;
      node->next = cur->next;
      cur->next = node;
      node->next->prev = node;
      cur = node;
    }
  }

  void next() {
    cur = cur->next;
  }

  int del() {
    int data = cur->data;
    if (cur->next == cur) {
      delete cur;
      cur = NULL;
    } else {
      Node *ptr = cur;
      cur = cur->prev;
      cur->next = ptr->next;
      cur->next->prev = cur;
      delete ptr;
    }
    return data;
  }

  Node *cur;
};

int main() {
  int n, m, i, j;
  Q *q = new Q();
  scanf("%d %d", &n, &m);
  for (i = 1; i <= n; i++)
    q->add(i);
  printf("<");
  for (i = 0; i < n; i++){
    if (i)
      printf(", ");
    for (j = 0; j < m; j++)
      q->next();
    printf("%d", q->del());
  }
  printf(">\n");
  delete q;
  return 0;
}
