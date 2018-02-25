#include <stdio.h>

class Node{
public:
    Node(int _k, char _ch, Node *_left = NULL, Node *_right = NULL){
        k = _k;
        ch = _ch;
        left = _left;
        right = _right;
    }

    int k;
    char ch;
    Node *left;
    Node *right;
};

void dfs(Node *node, char result[26], int size){
    if (node->ch){
        if (size) printf("%c %s\n", node->ch, result);
        else printf("%c 0\n", node->ch);
    }else{
        if (node->left) {
            result[size] = '0';
            dfs(node->left, result, size+1);
            result[size] = '\0';
        }
        if (node->right) {
            result[size] = '1';
            dfs(node->right, result, size+1);
            result[size] = '\0';
        }
    }
}

int main(){
    int n;
    char *str, result[26] = {};
    Node *list[26] = {}, *root;
    int first, second;
    int i;

    scanf("%d", &n);
    str = new char[n+1];

    scanf("%s", str);
    for (i = 0; i < n; i++){
        if (!list[str[i]-'A']) list[str[i]-'A'] = new Node(0, str[i]);
        list[str[i]-'A']->k++;
    }

    while (true){
        for (first = 0; !list[first]; first++);
        for (i = first + 1; i < 26; i++){
            if (list[i] && list[i]->k < list[first]->k)
                first = i;
        }
        for (second = 0; second < 26 && (second == first || !list[second]); second++);
        if (second == 26) break;
        for (i = second + 1; i < 26; i++){
            if (i != first && list[i] && list[i]->k < list[second]->k)
                second = i;
        }
        list[first] = new Node(list[first]->k + list[second]->k, '\0', list[first], list[second]);
        list[second] = NULL;
    }

    root = list[first];
    dfs(root, result, 0);

    for (i = 0; i < 26; i++) if(list[i]) delete list[i];
    delete[] str;
    return 0;
}
