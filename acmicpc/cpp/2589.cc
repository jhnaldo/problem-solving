#include <stdio.h>

#define MAX(a,b) (a>b?a:b)

class Node{
public:
    Node (int _x, int _y, int _dist, Node *_next = NULL){
        x = _x; y = _y; dist = _dist; next = _next;
    }

    int x;
    int y;
    int dist;
    Node* next;
};

class Queue{
public:
    Queue(){
        head = tail = NULL;
        size = 0;
    }

    void push(int x, int y, int d){
        Node *node = new Node(x, y, d);
        if (size++){
            tail->next = node;
            tail = tail->next;
        }else{
            head = tail = node;
        }
    }

    void pop(int &x, int &y, int &d){
        x = head->x;
        y = head->y;
        d = head->dist;
        head = head->next;
        size--;
    }

    bool isEmpty() { return size==0; }

    ~Queue(){
        Node *ptr = head;
        Node *before;
        for (ptr = head; ptr;){
            before = ptr;
            ptr = ptr->next;
            delete before;
        }
    }
private:
    Node *head;
    Node *tail;
    int size;
};

int find_max(char map[50][51], int n, int m, int x, int y){
    Queue *queue = new Queue();
    int dmap[50][51] = {0,};
    int i, j, max = 0;

    dmap[x][y] = 1;
    queue->push(x, y, 1);
    while (!queue->isEmpty()){
        int cur_x, cur_y, cur_depth;
        queue->pop(cur_x, cur_y, cur_depth);
        if (cur_depth-1 > max) max = cur_depth-1;

        if (cur_x > 0 && dmap[cur_x-1][cur_y]==0 && map[cur_x-1][cur_y] == 'L'){
            dmap[cur_x-1][cur_y] = cur_depth+1;
            queue->push(cur_x-1, cur_y, cur_depth+1);
        }
        if (cur_y > 0 && dmap[cur_x][cur_y-1]==0 && map[cur_x][cur_y-1] == 'L'){
            dmap[cur_x][cur_y-1] = cur_depth+1;
            queue->push(cur_x, cur_y-1, cur_depth+1);
        }
        if (cur_x < n-1 && dmap[cur_x+1][cur_y]==0 && map[cur_x+1][cur_y] == 'L'){
            dmap[cur_x+1][cur_y] = cur_depth+1;
            queue->push(cur_x+1, cur_y, cur_depth+1);
        }
        if (cur_y < m-1 && dmap[cur_x][cur_y+1]==0 && map[cur_x][cur_y+1] == 'L'){
            dmap[cur_x][cur_y+1] = cur_depth+1;
            queue->push(cur_x, cur_y+1, cur_depth+1);
        }
    }

    delete queue;
    return max;
}

int main(){
    int n, m, max = 0;
    char map[50][51];
    int i, j;

    scanf ("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%s", map[i]);
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (map[i][j]=='L'){
                int ret = find_max(map, n, m, i, j);
                max = MAX(ret, max);
            }
        }
    }

    printf("%d\n", max);

    return 0;
}
