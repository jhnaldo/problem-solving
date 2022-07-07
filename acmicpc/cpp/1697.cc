#include <stdio.h>

class Data {
public:
  Data(int _idx, int _depth) {
    idx = _idx;
    depth = _depth;
  }
  int idx;
  int depth;
};

class Node {
public:
  Node(Data *_data) {
    data = _data;
    next = NULL;
  }
  Data *data;
  Node *next;
};

class Q {
public:
  Q() {
    head = tail = NULL;
  }

  void push(int data, int depth) {
    Node *node = new Node(new Data(data, depth));
    if (tail) {
      tail->next = node;
      tail = node;
    } else {
      head = tail = node;
    }
  }

  Data* pop() {
    Node *ptr = head;
    Data *data = head->data;
    if (head == tail) {
      delete ptr;
      head = tail = NULL;
    } else {
      head = head->next;
      delete ptr;
    }
    return data;
  }

  Node *head;
  Node *tail;
};

int main() {
  int n, k, i;
  int dist[200001];
  Q *q = new Q();
  scanf("%d %d", &n, &k);
  for (i = 0; i <= 200000; i++)
    dist[i] = -1;
  q->push(k, 0);
  while(q->head) {
    Data *data = q->pop();
    int idx = data->idx;
    int depth = data->depth;
    dist[idx] = depth;
    if (idx == n) break;
    if (idx > 0 && dist[idx-1] == -1)
      q->push(idx-1, depth+1);
    if (idx % 2 == 0 && dist[idx/2] == -1)
      q->push(idx/2, depth+1);
    if (dist[idx+1] == -1)
      q->push(idx+1, depth+1);
    delete data;
  }
  printf("%d\n", dist[n]);

  return 0;
}
