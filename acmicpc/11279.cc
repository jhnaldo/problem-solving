#include <stdio.h>

#define parent(x) (((x)-1)/2)
#define lchild(x) ((x)*2+1)
#define rchild(x) ((x)*2+2)

void swap (int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int n, size, i;
    int arr[100000] = {0,};

    scanf("%d", &n);
    size = 0;
    while(n--){
        int k;
        scanf("%d", &k);
        if (k){
            int cur = size;
            arr[size++] = k;
            while (cur && arr[parent(cur)] < arr[cur]){
                swap(arr[parent(cur)], arr[cur]);
                cur = parent(cur);
            }
        }else{
            if (size){
                int cur = 0;
                printf("%d\n", arr[0]);
                arr[0] = arr[size-1];
                arr[size-1] = 0;
                size--;

                while (lchild(cur) < 100000 && arr[lchild(cur)]){
                    int max_idx = lchild(cur);
                    if (rchild(cur) < 100000 && arr[max_idx] < arr[rchild(cur)]){
                        max_idx = rchild(cur);
                    }

                    if (arr[max_idx] <= arr[cur])
                        break;

                    swap(arr[max_idx], arr[cur]);
                    cur = max_idx;
                }
            }else{
                printf("0\n");
            }
        }
    }

    return 0;
}
