#include <stdio.h>

class Node{
public:
    Node(int _data, Node* _next){ data = _data, next = _next; }

    int data;
    Node* next;
};

class List{
public:
    List() { head = NULL; }
    void push(int data) { head = new Node(data, head); }
    Node *head;
};

int digit_sq_sum(int n){
    int sum = 0;
    while (n){
        sum += (n%10) * (n%10);
        n /= 10;
    }
    return sum;
}

void make(bool check[]){
    int i;
    int stack[1000];
    int size;
    List prev[1001];
    for (i = 2; i <= 1000; i++){
        prev[digit_sq_sum(i)].push(i);
    }

    stack[0] = 1;
    check[1] = true;
    size = 1;
    while(size){
        int cur = stack[--size];
        Node *ptr = prev[cur].head;
        while(ptr){
            if (!check[ptr->data]){
                check[ptr->data] = true;
                stack[size++] = ptr->data;
            }
            ptr = ptr->next;
        }
    }
}

int main(){
    int n;
    bool check[1001] = {};
    int i;
    scanf("%d", &n);
    make(check);
    while(!check[n]) n--;
    printf("%d\n", n);
    return 0;
}
