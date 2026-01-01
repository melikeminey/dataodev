#include <stdio.h>
#include <stdlib.h>
//Son Odev Treede neden preorder kullanýyoruz
struct Node {
    char data;
    struct Node *left;
    struct Node *right;
};

struct Node* newNode(char data) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void printTree(struct Node* root, int level) {
    if (root == NULL)
        return;

    for (int i = 0; i < level; i++)
        printf("  ");

    printf("%c\n", root->data);

    printTree(root->left, level + 1);
    printTree(root->right, level + 1);
}

int main() {
    struct Node* root = newNode('=');
    root->left = newNode('x');
    root->right = newNode('+');

    root->right->left = newNode('*');
    root->right->right = newNode('5');

    root->right->left->left = newNode('y');
    root->right->left->right = newNode('z');

    printTree(root, 0);

    return 0;
}
