#include <stdio.h>
#include <string.h>

class BinNum{
    void swap (char& x, char& y){
        char temp = x;
        x = y;
        y = temp;
    }
    void reverse(){
        int i;
        for (i = 0; i < size/2; i++)
            swap(str[i], str[size-i-1]);
    }
    void adjust(){
        int i;
        for (i = 0; i < size; i++){
            if (str[i] > '1'){
                str[i]-=2;
                str[i+1]++;
            }
        }
        if (str[size])
            str[size++] = '1';
        for (i = size-1; i > 0 && str[i]=='0'; i--) str[--size] = '\0';
    }
public:
    BinNum (char _str[]){
        strcpy(str, _str);
        size = strlen(str);
        reverse();
    }

    void add (BinNum* right){
        int i;
        for (i = 0; (i < size && i < right->size); i++){
            str[i] += right->str[i] - '0';
        }
        for (; i < right->size; i++){
            str[i] = right->str[i];
        }
        if (size < right->size){
            size = right->size;
            str[size] = '\0';
        }
        adjust();
    }

    void display(){
        reverse();
        printf("%s\n", str);
        reverse();
    }

    char str[100];
    int size;
};

int main(){
    BinNum *left, *right;
    char str[100];

    scanf("%s", str);
    left = new BinNum(str);
    scanf("%s", str);
    right = new BinNum(str);

    left->add(right);
    left->display();
    return 0;
}
