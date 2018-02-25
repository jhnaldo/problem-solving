#include <stdio.h>

class Node{
public:
    Node(int _data, Node *_next = NULL){
        data = _data;
        next = _next;
    }

    int data;
    Node *next;
};

class Queue{
public:
    Queue(){
        head = tail = NULL;
    }

    void push(int data){
        Node *ptr = new Node(data);
        if (tail){
            tail->next = ptr;
            tail = ptr;
        }else{
            head = tail = ptr;
        }
    }

    int pop(){
        int data = head->data;
        if (head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node *ptr = head;
            head = head->next;
            delete ptr;
        }
        return data;
    }

    bool isEmpty(){ return head == NULL; }

    ~Queue(){
        while (!isEmpty()) pop();
    }

    Node *head;
    Node *tail;
};

int main(){
    Queue *queue = new Queue();
    int n, m;
    int **edge, *size;
    bool *check;
    int i;

    scanf("%d %d", &n, &m);
    edge = new int*[n];
    for (i = 0; i < n; i++) edge[i] = new int[n]();
    size = new int[n]();
    check = new bool[n]();

    for (i = 0; i < m; i++){
        int from, to;
        scanf("%d %d", &from, &to);
        from--; to--;
        edge[from][size[from]++] = to;
        edge[to][size[to]++] = from;
    }

    queue->push(0);
    check[0] = true;
    while (!queue->isEmpty()){
        int cur = queue->pop();
        printf("%d ", cur + 1);
        for (i = 0; i < size[cur]; i++){
            if (!check[edge[cur][i]]){
                check[edge[cur][i]] = true;
                queue->push(edge[cur][i]);
            }
        }
    }
    printf("\n");

    return 0;
}
