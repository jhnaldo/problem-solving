#include <stdio.h>

class Node{
public:
    int data;
    Node *next;

    Node (int _data, Node *_next = NULL){
        data = _data;
        next = _next;
    }
};

class Queue{
public:
    Node *head;
    Node *tail;
    int size;

    Queue(){
        head = tail = NULL;
        size = 0;
    }
    ~Queue(){
        Node *ptr;
        while (head){
            ptr = head;
            head  = head->next;
            delete ptr;
        }
    }

    void push(int data){
        if (head){
            tail->next = new Node(data);
            tail = tail->next;
        }else{
            head = tail = new Node(data);
        }
        size++;
    }

    int pop(){
        int data;
        Node *ptr;
        if (empty()){
            return -1;
        }else if (head == tail){
            data = head->data;
            ptr = head;
            head = tail = NULL;
        }else{
            data = head->data;
            ptr = head;
            head = head->next;
        }
        delete ptr;
        size--;
        return data;
    }

    int get_size(){ return size; }
    bool empty(){ return size==0; }
    int front(){
        return (empty()?-1:head->data);
    }
    int back(){
        return (empty()?-1:tail->data);
    }
};

int main(){
    int n;
    Queue *queue = new Queue();
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
      queue->push(i);
    while(!queue->empty()) {
      int x = queue->pop();
      if (!queue->empty())
        queue->push(queue->pop());
      else
        printf("%d\n", x);
    }
    delete queue;
    return 0;
}
