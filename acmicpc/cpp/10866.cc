#include <stdio.h>
#include <string.h>

class Card {
public:
  Card(int _data) {
    data = _data;
    prev = next = NULL;
  }

  int data;
  Card *prev;
  Card *next;
};

class Deck {
public:
  Deck() {
    front = back = NULL;
    size = 0;
  }

  void push_front(int x) {
    Card *card = new Card(x);
    if (front) {
      card->next = front;
      front->prev = card;
      front = card;
    } else {
      front = back = card;
    }
    size++;
  }

  void push_back(int x) {
    Card *card = new Card(x);
    if (back) {
      card->prev = back;
      back->next = card;
      back = card;
    } else {
      front = back = card;
    }
    size++;
  }

  int pop_front() {
    if (front) {
      int data = front->data;
      if (front->next) {
        Card *ptr = front;
        front = front->next;
        front->prev = NULL;
        delete ptr;
      } else {
        delete front;
        front = back = NULL;
      }
      size--;
      return data;
    } else {
      return -1;
    }
  }

  int pop_back() {
    if (back) {
      int data = back->data;
      if (back->prev) {
        Card *ptr = back;
        back = back->prev;
        back->next = NULL;
        delete ptr;
      } else {
        delete back;
        front = back = NULL;
      }
      size--;
      return data;
    } else {
      return -1;
    }
  }

  int get_front() {
    if (front) {
      return front->data;
    } else {
      return -1;
    }
  }

  int get_back() {
    if (back) {
      return back->data;
    } else {
      return -1;
    }
  }

  Card *front;
  Card *back;
  int size;
};

int main() {
  int n;
  Deck *deck = new Deck();
  scanf("%d", &n);
  while(n--) {
    char str[21];
    scanf("%s", str);
    if (strcmp(str, "push_front") == 0) {
      int x;
      scanf("%d", &x);
      deck->push_front(x);
    } else if (strcmp(str, "push_back") == 0) {
      int x;
      scanf("%d", &x);
      deck->push_back(x);
    } else if (strcmp(str, "pop_front") == 0) {
      printf("%d\n", deck->pop_front());
    } else if (strcmp(str, "pop_back") == 0) {
      printf("%d\n", deck->pop_back());
    } else if (strcmp(str, "size") == 0) {
      printf("%d\n", deck->size);
    } else if (strcmp(str, "empty") == 0) {
      printf("%d\n", deck->size == 0);
    } else if (strcmp(str, "front") == 0) {
      printf("%d\n", deck->get_front());
    } else if (strcmp(str, "back") == 0) {
      printf("%d\n", deck->get_back());
    }
  }
  return 0;
}
