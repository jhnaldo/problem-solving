#include <stdio.h>
#include <string.h>

class BigNum{
    void swap(char& l, char& r){
        char t = l;
        l = r;
        r = t;
    }
    void reverse(){
        int i;
        for (i = 0; i < size/2; i++){
            swap(str[i], str[size-i-1]);
        }
    }

    void stable(){
        int i;
        for (i = 0; i < size; i++){
            if (str[i]>'9'){
                str[i] -= 10;
                str[i+1] += 1;
            }
        }
        if (str[size]){
            str[size++] = '1';
            str[size] = '\0';
        }
    }
public:
    BigNum(char _str[]){
        strcpy(str, _str);
        size = strlen(str);
        this->reverse();
    }

    void add(const BigNum* right){
        int i;
        for (i = 0; i < size && i < right->size; i++)
            str[i] += (right->str[i]-'0');
        for (; i < right->size; i++)
            str[i] = right->str[i];
        if (size < right->size){
            size = right->size;
            str[size] = '\0';
        }
        stable();
    }

    void display(){
        this->reverse();
        printf("%s\n", str);
        this->reverse();
    }

    char str[10001];
    int size;
};

int main(){
    BigNum *left, *right;
    char str[10001];

    scanf("%s", str);
    left = new BigNum(str);
    scanf("%s", str);
    right = new BigNum(str);

    left->add(right);

    left->display();
    return 0;
}
