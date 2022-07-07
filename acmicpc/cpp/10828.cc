#include <stdio.h>
#include <string.h>

class Stack{
public:
    Stack(){
        size = 0;
    }

    void push(int x) {
        arr[size++] = x;
    }
    int pop() {
        return (empty()?-1:arr[--size]);
    }
    int get_size() {
        return size;
    }
    int empty() {
        return (size == 0);
    }
    int top() {
        return (empty()?-1:arr[size-1]);
    }
private:
    int arr[10000];
    int size;
};

int main(){
    Stack *stack = new Stack();
    int n;
    scanf("%d", &n);
    while (n--){
        char command[6];
        int x;
        scanf("%s", command);
        if (!strcmp(command, "push")){
            scanf("%d", &x);
            stack->push(x);
        }else if(!strcmp(command, "pop")){
            printf("%d\n", stack->pop());
        }else if(!strcmp(command, "size")){
            printf("%d\n", stack->get_size());
        }else if(!strcmp(command, "empty")){
            printf("%d\n", stack->empty());
        }else if(!strcmp(command, "top")){
            printf("%d\n", stack->top());
        }else{
        }
    }
    delete stack;
    return 0;
}
