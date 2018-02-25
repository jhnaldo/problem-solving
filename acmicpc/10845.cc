#include <stdio.h>
#include <string.h>

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
    while(n--){
        char command[6];
        scanf("%s", command);
        if (!strcmp(command, "push")){
            int data;
            scanf("%d", &data);
            queue->push(data);
        }else if (!strcmp(command, "pop")){
            printf("%d\n", queue->pop());
        }else if (!strcmp(command, "size")){
            printf("%d\n", queue->get_size());
        }else if (!strcmp(command, "empty")){
            printf("%d\n", queue->empty());
        }else if (!strcmp(command, "front")){
            printf("%d\n", queue->front());
        }else if (!strcmp(command, "back")){
            printf("%d\n", queue->back());
        }
    }
    delete queue;
    return 0;
}
