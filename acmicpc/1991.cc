#include <stdio.h>

class Node{
public:
    Node(char _ch, Node* _left = NULL, Node* _right = NULL){
        ch = _ch;
        left = _left;
        right = _right;
    }

    char ch;
    Node* left;
    Node* right;
};

void preorder(Node* node){
    printf("%c", node->ch);
    if (node->left) preorder(node->left);
    if (node->right) preorder(node->right);
}

void inorder(Node* node){
    if (node->left) inorder(node->left);
    printf("%c", node->ch);
    if (node->right) inorder(node->right);
}

void postorder(Node* node){
    if (node->left) postorder(node->left);
    if (node->right) postorder(node->right);
    printf("%c", node->ch);
}

int main(){
    int n;
    char str[2];
    Node** nodes;
    int i;

    scanf("%d", &n);
    nodes = new Node*[n];
    for (i = 0; i < n; i++)
        nodes[i] = new Node(i+'A');
    for (i = 0; i < n; i++){
        scanf("%s", str);
        int k = str[0]-'A';
        scanf("%s", str);
        if (str[0] != '.') nodes[k]->left = nodes[str[0]-'A'];
        scanf("%s", str);
        if (str[0] != '.') nodes[k]->right = nodes[str[0]-'A'];
    }

    preorder(nodes[0]);
    printf("\n");
    inorder(nodes[0]);
    printf("\n");
    postorder(nodes[0]);
    printf("\n");
    return 0;
}
