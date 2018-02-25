#include <stdio.h>

class Stack{
public:
    Stack() { size = 0; }
    void push(int k) { node[size++] = k; }
    int pop() { return node[--size]; }
    bool isEmpty() { return size==0; }

    int node[50];
    int size;
};

int main(){
    int n, k, root, cur;
    int size[50] = {0,};
    int child[50][50];
    int i, count = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int parent;
        scanf("%d", &parent);
        if (parent==-1){
            root = i;
        }else{
            child[parent][size[parent]++] = i;
        }
    }
    scanf("%d", &k);

    Stack* stack = new Stack();
    stack->push(root);
    while(!stack->isEmpty()){
        cur = stack->pop();
        if (cur == k) continue;
        if (size[cur]){
            for (i = 0; i < size[cur]; i++){
                stack->push(child[cur][i]);
            }
        }else{
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
