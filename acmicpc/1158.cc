#include <stdio.h>

class Node{
public:
    Node(int _data, Node* _next = NULL, Node* _prev = NULL){
        data = _data;
        next = _next;
        prev = _prev;
    }

    int data;
    Node* next;
    Node* prev;
};

class Cycle{
public:
    Cycle(int k){
        Node *prev, *ptr;
        size = k;
        prev = cur = new Node(k-1);
        for (int i = 0; i < k-1; i++){
            ptr = new Node(i);
            prev->next = ptr;
            ptr->prev = prev;
            prev = ptr;
        }
        prev->next = cur;
        cur->prev = prev;
    }

    void move(int k){
        for (int i = 0; i < k; i++) cur = cur->next;
    }

    int del(){
        int data = cur->data;
        if (size > 1){
            Node* prev = cur->prev;
            prev->next = cur->next;
            cur->next->prev = prev;
            delete cur;
            cur = prev;
        }else{
            delete cur;
        }
        size--;

        return data;
    }
private:
    Node* cur;
    int size;
};


int main(){
    int n, m;
    int i, j;
    Cycle* cycle;

    scanf("%d %d", &n, &m);
    cycle = new Cycle(n);

    cycle->move(m);
    printf("<%d", cycle->del()+1);
    for (i = 1; i < n; i++){
        cycle->move(m);
        printf(", %d", cycle->del()+1);
    }
    printf(">\n");
    return 0;
}
