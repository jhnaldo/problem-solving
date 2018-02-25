#include <stdio.h>

#define OUT     1
#define IN      2
#define HEAP    3
#define PARENT(x) (((x)-1)/2)
#define LCHILD(x) ((x)*2+1)
#define RCHILD(x) ((x)*2+2)

class Node;

class Edge{
public:
    Edge(Node* _to, int _weight, Edge* _next){
        to = _to;
        weight = _weight;
        next = _next;
    }

    Node* to;
    Edge* next;
    int weight;
};

class Node{
public:
    Node(){
        weight = -1;
        head = NULL;
        state = OUT;
        idx = -1;
    }

    void addEdge(Node* to, int weight){
        Edge* edge = new Edge(to, weight, head);
        head = edge;
    }

    ~Node(){
        Edge* ptr = head;
        while (head){
            ptr = head;
            head = head->next;
            delete ptr;
        }
    }

    int weight;
    Edge* head;
    int idx;
    int state;
};

class Graph{
public:
    Graph(int n){
        int i;
        size = n;
        nodes = new Node*[n];
        for (i = 0; i < size; i++)
            nodes[i] = new Node();
    }

    void addEdge(int from, int to, int weight){
        nodes[from]->addEdge(nodes[to], weight);
        nodes[to]->addEdge(nodes[from], weight);
    }

    ~Graph(){
        int i;
        for (i = 0; i < size; i++)
            delete nodes[i];
        delete[] nodes;
    }

    int size;
    Node **nodes;
};

class Heap{
public:
    Heap(int n){
        arr = new Node*[n];
        size = 0;
    }

    void swap(int left, int right){
        Node* ptr = arr[left];
        arr[left] = arr[right];
        arr[right] = ptr;

        arr[left]->idx = left;
        arr[right]->idx = right;
    }

    void upward(int cur){
        if (cur){
            int parent = PARENT(cur);
            if (arr[parent]->weight > arr[cur]->weight){
                swap(parent, cur);
                upward(parent);
            }
        }
    }

    void downward(int cur){
        int left = LCHILD(cur);
        int right = RCHILD(cur);

        if (left < size){
            int min = left;
            if (right < size){
                if (arr[right]->weight < arr[left]->weight)
                    min = right;
            }
            if (arr[cur]->weight > arr[min]->weight){
                swap(cur, min);
                downward(min);
            }
        }
    }

    void push(Node* node, int weight){
        arr[size] = node;
        node->idx = size++;
        node->state = HEAP;
        update(node, weight);
    }

    void update(Node* node, int weight){
        node->weight = weight;
        upward(node->idx);
    }

    Node* pop(){
        Node* result = arr[0];
        result->state = IN;
        arr[0] = arr[--size];
        arr[0]->idx = 0;
        downward(0);
        return result;
    }

    bool isEmpty(){ return size == 0; }

    ~Heap(){
        delete[] arr;
    }

    Node** arr;
    int size;
};

int main(){
    int n, m;
    Graph *graph;
    Heap *heap;
    int i, result;

    scanf("%d %d", &n, &m);
    graph = new Graph(n);
    heap = new Heap(n);
    for (i = 0; i < m; i++){
        int from, to, weight;
        scanf("%d %d %d", &from, &to, &weight);
        from--; to--;
        graph->addEdge(from, to, weight);
    }

    heap->push(graph->nodes[0], 0);
    while(!heap->isEmpty()){
        Node *cur = heap->pop();
        Edge *edge = cur->head;

        for(edge = cur->head; edge; edge = edge->next){
            Node* to = edge->to;
            int weight = cur->weight + edge->weight;
            if (to->state == HEAP && weight < to->weight){
                heap->update(to, weight);
            }else if(to->state == OUT){
                heap->push(to, weight);
            }
        }
    }

    result = graph->nodes[n-1]->weight;
    if (result == -1){
        printf("Impossible\n");
    }else{
        printf("%d\n", result);
    }

    delete graph;
    delete heap;
    return 0;
}
