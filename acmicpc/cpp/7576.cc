#include <stdio.h>

class Node{
public:
    Node(int _x, int _y, int _k, Node *_next = NULL){
        x = _x; y = _y; k = _k ; next = _next;
    }

    int x;
    int y;
    int k;
    Node *next;
};

class Queue{
public:
    Queue(){
        size = 0;
        head = tail = NULL;
    }

    void push(int x, int y, int k){
        Node *node = new Node(x, y, k);
        if (isEmpty()){
            head = tail = node; 
        }else{
            tail->next = node;
            tail = tail->next;
        }
        size++;
    }

    void pop(int &x, int &y, int &k){
        x = head->x; y = head->y; k = head->k;
        if (head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node *ptr = head;
            head = head->next;
            delete ptr;
        }
        size--;
    }

    bool isEmpty() { return size == 0; }

    ~Queue(){
        Node *ptr, *before;
        for (ptr = head; ptr; before = ptr, ptr = ptr->next, delete before);
    }
private:
    Node *head;
    Node *tail;
    int size;
};

int main(){
    int n, m;
    int arr[1000][1000];
    Queue *queue = new Queue();
    int i, j;

    scanf("%d %d", &m, &n);
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
                queue->push(i, j, 1);
        }
    }

    while (!queue->isEmpty()){
        int x, y, k;
        queue->pop(x, y, k);

        if (x > 0 && arr[x-1][y] == 0) { arr[x-1][y] = k+1; queue->push(x-1, y, k+1); }
        if (x < n-1 && arr[x+1][y] == 0) { arr[x+1][y] = k+1; queue->push(x+1, y, k+1); }
        if (y > 0 && arr[x][y-1] == 0) { arr[x][y-1] = k+1; queue->push(x, y-1, k+1); }
        if (y < m-1 && arr[x][y+1] == 0) { arr[x][y+1] = k+1; queue->push(x, y+1, k+1); }
    }

    int max = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (arr[i][j]){
                max = (max < arr[i][j]? arr[i][j]: max);
            }else{
                printf("-1\n");
                return 0;
            }
        }
    }
    printf("%d\n", max-1);

    return 0;
}
