#include <stdio.h>

#define PARENT(x) ((x-1)/2)
#define LCHILD(x) ((x*2)+1)
#define RCHILD(x) ((x*2)+2)
#define F false
#define T true

class IPQ{
public:
    IPQ(){ size = 0; }

    void push(int k){
        int i;
        min[size] = max[size] = k;
        min2max[size] = max2min[size] = size;
        for (i = size; i > 0 && min[PARENT(i)] > min[i]; i = PARENT(i)) swap(F, PARENT(i), i);
        for (i = size; i > 0 && max[PARENT(i)] < max[i]; i = PARENT(i)) swap(T, PARENT(i), i);
        size++;
    }

    int min_pop(){
        int min_value = min[0];
        int min_pos = min2max[0];
        int i;
        --size;
        swap(T, min_pos, size);
        for (i = min_pos; i > 0 && max[PARENT(i)] < max[i]; i = PARENT(i)) swap(T, PARENT(i), i);
        swap(F, 0, size);
        for (i = 0; LCHILD(i) < size;){
            int min_child;
            if (RCHILD(i) < size){
                min_child = (min[LCHILD(i)] < min[RCHILD(i)]? LCHILD(i):RCHILD(i));
            }else{
                min_child = LCHILD(i);
            }
            if (min[min_child] < min[i]){
                swap(F, min_child, i);
                i = min_child;
            }else{
                break;
            }
        }
        return min_value;
    }

    int max_pop(){
        int max_value = max[0];
        int max_pos = max2min[0];
        int i;
        --size;
        swap(F, max_pos, size);
        for (i = max_pos; i > 0 && min[PARENT(i)] > min[i]; i = PARENT(i)) swap(F, PARENT(i), i);
        swap(T, 0, size);
        for (i = 0; LCHILD(i) < size;){
            int max_child;
            if (RCHILD(i) < size){
                max_child = (max[LCHILD(i)] > max[RCHILD(i)]? LCHILD(i):RCHILD(i));
            }else{
                max_child = LCHILD(i);
            }
            if (max[max_child] > max[i]){
                swap(T, max_child, i);
                i = max_child;
            }else{
                break;
            }
        }
        return max_value;
    }

    bool isEmpty(){ return size == 0; }

    void display(){
        if (isEmpty()) printf("EMPTY\n");
        else printf("%d %d\n", max[0], min[0]);
    }
private:
    int min[1000000];
    int min2max[1000000];
    int max[1000000];
    int max2min[1000000];
    int size;

    void _swap(int &x, int &y){
        int tmp = x;
        x = y;
        y = tmp;
    }

    void swap(bool is_max, int x, int y){
        if (is_max){
            _swap(max[x], max[y]);
            _swap(max2min[x], max2min[y]);
            _swap(min2max[max2min[x]] , min2max[max2min[y]]);
        }else{
            _swap(min[x], min[y]);
            _swap(min2max[x], min2max[y]);
            _swap(max2min[min2max[x]] , max2min[min2max[y]]);
        }
    }
};

int main(){
    int t;

    scanf("%d", &t);
    while (t--){
        int n, k;
        char ch[2];
        IPQ *ipq = new IPQ();
        int i;

        scanf("%d", &n);
        for (i = 0; i < n; i++){
            scanf("%s %d", ch, &k);
            if (ch[0] == 'I'){
                ipq->push(k);
            }else if (!ipq->isEmpty()){
                if (k == -1){
                    ipq->min_pop();
                }else{
                    ipq->max_pop();
                }
            }
        }
        ipq->display();
        delete ipq;
    }
    return 0;
}
