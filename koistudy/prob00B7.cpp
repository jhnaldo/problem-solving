#include <stdio.h>
#include <string.h>

#define MAX(a,b) ((a)>(b)?(a):(b))

class BigNum {
public:
    BigNum(char *str = NULL) {
        if (str){
            int len = strlen(str);
            int i;
            neg = (str[0] == '-');
            size = len;
            if (neg) size--;
            for (i = 0; i < size; i++) arr[i] = str[len-1-i] - '0';
        }else{
            size = 0;
            neg = false;
        }
    }

    BigNum* add(BigNum *other){
        BigNum *res;
        if (neg == other->neg){
            int i;
            res = new BigNum();
            res->neg = neg;
            for (i = 0; i < size && i < other->size; i++)
                res->arr[res->size++] = arr[i] + other->arr[i];
            for (; i < size; i++)
                res->arr[res->size++] = arr[i];
            for (; i < other->size; i++)
                res->arr[res->size++] = other->arr[i];

            for (i = 0; i < res->size-1; i++){
                if (res->arr[i] > 9){
                    res->arr[i] -= 10;
                    res->arr[i+1]++;
                }
            }
            if (res->arr[res->size-1] > 9){
                res->arr[res->size-1] -= 10;
                res->arr[res->size++] = 1;
            }
        }else{
            other->neg = !other->neg;
            res = sub(other);
            other->neg = !other->neg;
        }
        return res;
    }

    BigNum* sub(BigNum *other){
        BigNum *res;

        if (other->absBigger(this)){
            res = other->sub(this);
            res->neg = !res->neg;
        }else{
            if (neg == other->neg){
                int i;
                res = new BigNum();
                res->neg = neg;

                for (i = 0; i < size && i < other->size; i++)
                    res->arr[res->size++] = arr[i] - other->arr[i];
                for (; i < size; i++)
                    res->arr[res->size++] = arr[i];

                for (i = 0; i < res->size-1; i++){
                    if (res->arr[i] < 0){
                        res->arr[i] += 10;
                        res->arr[i+1]--;
                    }
                }

                while (res->size && res->arr[res->size-1] == 0) res->size--;
            }else{
                other->neg = !other->neg;
                res = add(other);
                other->neg = !other->neg;
            }
        }
        return res;
    }

    bool absBigger(BigNum *other){
        int i;
        if (size > other->size) return true;
        if (size < other->size) return false;

        for (i = size-1; i >= 0; i++){
            if (arr[i] > other->arr[i]) return true;
            if (arr[i] < other->arr[i]) return false;
        }

        return false;
    }

    void display(){
        int i;
        if (size == 0){
            printf("0\n");
            return;
        }
        if (neg) printf("-");
        for (i = size-1; i >= 0; i--)
            printf("%d", arr[i]);
        printf("\n");
    }

    int arr[101];
    int size;
    bool neg;
};

int main(){
    BigNum *left;
    BigNum *right;
    BigNum *res;
    char str[102];

    scanf("%s", str);
    left = new BigNum(str);
    scanf("%s", str);
    right = new BigNum(str);

    res = left->add(right);
    res->display();

    delete left;
    delete right;
    delete res;

    return 0;
}
