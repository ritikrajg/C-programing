#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left, *right;
} Node;

Node *createNode(int data) {
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node *insert(Node *root, int data) {
    if (!root) return createNode(data);
    if (data < root->data) root->left = insert(root->left, data);
    else root->right = insert(root->right, data);
    return root;
}

Node *findMin(Node *node) {
    while (node->left) node = node->left;
    return node;
}

Node *delete(Node *root, int data) {
    if (!root) return root;
    if (data < root->data) root->left = delete(root->left, data);
    else if (data > root->data) root->right = delete(root->right, data);
    else {
        if (!root->left) {
            Node *temp = root->right;
            free(root);
            return temp;
        } else if (!root->right) {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        Node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }
    return root;
}

Node *search(Node *root, int data) {
    if (!root || root->data == data) return root;
    if (data < root->data) return search(root->left, data);
    return search(root->right, data);
}

void inorder(Node *root) {
    if (root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    Node *root = NULL;
    int arr[] = {50, 30, 20, 40, 70, 60, 80};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) root = insert(root, arr[i]);

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Delete 20\n");
    root = delete(root, 20);
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Delete 30\n");
    root = delete(root, 30);
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Delete 50\n");
    root = delete(root, 50);
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Search for 60: ");
    Node *node = search(root, 60);
    if (node) printf("Found\n");
    else printf("Not found\n");

    return 0;
}