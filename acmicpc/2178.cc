#include <stdio.h>

class Node{
public:
    Node(int _x, int _y, int _pos){
        x = _x; y = _y; pos = _pos; next = NULL;
    }
    int x;
    int y;
    int pos;
    Node* next;
};

class Queue{
public:
    Queue(){
        head = tail = NULL;
    }
    void push(int x, int y, int pos){
        Node* node = new Node(x, y, pos);
        if (isEmpty()){
            head = tail = node;
        }else{
            tail->next = node;
            tail = node;
        }
    }
    void pop(int &x, int &y, int &pos){
        Node* node = head;
        head = head->next;

        x = node->x;
        y = node->y;
        pos = node->pos;
        delete node;
        if (head == NULL) tail = NULL;
    }
    bool isEmpty(){ return head==NULL; }
    ~Queue(){
        Node* ptr = head;
        while (ptr){
            head = ptr->next;
            delete ptr;
            ptr = head;
        }
    }
    Node *head;
    Node *tail;
};

int main(){
    int n, m;
    char str[101];
    int arr[102][102] = {0, };
    Queue *q = new Queue();
    int x, y, pos;
    int i, j;

    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++){
        scanf("%s", str);
        for (j = 1; j <= m; j++){
            arr[i][j] = (str[j-1]=='0'?0:-1);
        }
    }

    arr[1][1] = 1;
    q->push(1, 1, 1);
    while (!q->isEmpty()){
        q->pop(x, y, pos);
        if (x == n && y == m){
            printf("%d\n", pos);
            break;
        }
        if (arr[x-1][y] == -1) { arr[x-1][y] = pos+1; q->push(x-1, y, pos+1); }
        if (arr[x+1][y] == -1) { arr[x+1][y] = pos+1; q->push(x+1, y, pos+1); }
        if (arr[x][y-1] == -1) { arr[x][y-1] = pos+1; q->push(x, y-1, pos+1); }
        if (arr[x][y+1] == -1) { arr[x][y+1] = pos+1; q->push(x, y+1, pos+1); }
    }

    delete q;
    return 0;
}
