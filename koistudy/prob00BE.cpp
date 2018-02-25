#include <stdio.h>

class Node{
public:
    Node(int _x, int _y, int _dist, Node *_next = NULL){
        x = _x;
        y = _y;
        dist = _dist;
        next = _next;
    }

    int x;
    int y;
    int dist;
    Node *next;
};

class Queue{
public:
    Queue(){
        head = tail = NULL;
    }

    void push(int x, int y, int dist){
        Node *ptr = new Node(x, y, dist);
        if (head){
            tail->next = ptr;
            tail = ptr;
        }else{
            head = tail = ptr;
        }
    }

    void pop(int &x, int &y, int &dist){
        x = head->x;
        y = head->y;
        dist = head->dist;

        if (head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node *ptr = head;
            head = head->next;
            delete ptr;
        }
    }

    ~Queue(){
        int x, y, dist;
        while (!isEmpty()) pop(x, y, dist);
    }

    bool isEmpty() { return head == NULL; }

    Node *head;
    Node *tail;
};

int main(){
    Queue *queue = new Queue();
    int n, m;
    char **map;
    int i, j;

    scanf("%d %d", &n, &m);
    map = new char*[n];
    for (i = 0; i < n; i++){
        map[i] = new char[m+1];
        scanf("%s", map[i]);
        for (j = 0; j < m; j++){
            if (map[i][j] == 'S')
                queue->push(i, j, 0);
        }
    }

    while (!queue->isEmpty()){
        int x, y, dist;
        queue->pop(x, y, dist);
        if (map[x][y] != '#'){
            if (map[x][y] == 'G'){
                printf("%d\n", dist);
                delete queue;
                return 0;
            }
            map[x][y] = '#';
            if (x > 0 && map[x-1][y] != '#') queue->push(x-1, y, dist+1);
            if (x < n-1 && map[x+1][y] != '#') queue->push(x+1, y, dist+1);
            if (y > 0 && map[x][y-1] != '#') queue->push(x, y-1, dist+1);
            if (y < m-1 && map[x][y+1] != '#') queue->push(x, y+1, dist+1);
        }
    }

    delete queue;
    printf("-1\n");

    return 0;
}
