#include <stdio.h>
#include <stdlib.h>

class Node{
public:
    Node(int _data, Node* _next = NULL){
        data = _data;
        next = _next;
    }

    Node* next;
    int data;
};

class Queue{
public:
    Queue(){
        head = tail = NULL;
        size = 0;
    }

    void push(int _data){
        Node* node = new Node(_data);
        if (isEmpty()) head = tail = node;
        else tail = tail->next = node;
        size++;
    }

    int pop(){
        int data = head->data;
        Node *ptr = head;
        head = head->next;
        delete ptr;
        size--;
        return data;
    }

    bool isEmpty(){ return size == 0; }

    ~Queue(){
        Node *tmp, *ptr = head;
        while (ptr){
            tmp = ptr;
            ptr = ptr->next;
            delete tmp;
        }
    }
private:
    Node* head;
    Node* tail;
    int size;
};

int comp(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

void dfs(int* neighbors[], int n, int size[], int root){
    int stack[100000], ssize = 1;
    bool check[1000] = {0,};
    int i;

    stack[0] = root;

    while (ssize){
        int cur = stack[--ssize];
        if (!check[cur]){
            check[cur] = true;
            printf ("%d ", cur+1);

            for (i = size[cur]-1; i >= 0; i--){
                int neighbor = neighbors[cur][i];
                if (!check[neighbor])
                    stack[ssize++] = neighbor;
            }
        }
    }
    printf("\n");
}

void bfs(int* neighbors[], int n, int size[], int root){
    Queue* queue = new Queue();
    bool check[1000] = {0,};
    int i;

    queue->push(root);

    while (!queue->isEmpty()){
        int cur = queue->pop();
        if (!check[cur]){
            check[cur] = true;
            printf ("%d ", cur+1);

            for (i = 0; i < size[cur]; i++){
                int neighbor = neighbors[cur][i];
                if (!check[neighbor])
                    queue->push(neighbor);
            }
        }
    }
    printf("\n");
}

int main(){
    int n, m, root;
    int from[100000], to[100000];
    int count[1000] = {0,}, size[1000], *neighbors[1000];
    int i, j;

    scanf("%d %d %d", &n, &m, &root);
    root--;
    for (i = 0; i < m; i++){
        scanf("%d %d", &from[i], &to[i]);
        from[i]--;
        to[i]--;
        size[from[i]]++;
        size[to[i]]++;
    }
    for (i = 0; i < n; i++)
        neighbors[i] = new int[size[i]];
    for (i = 0; i < m; i++){
        neighbors[from[i]][count[from[i]]++] = to[i];
        neighbors[to[i]][count[to[i]]++] = from[i];
    }

    for (i = 0; i < n; i++)
        qsort (neighbors[i], size[i], sizeof(int), comp);

    dfs(neighbors, n, size, root);
    bfs(neighbors, n, size, root);

    return 0;
}
