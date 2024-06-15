#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *can(int data){
    struct Node *n;
    n=(struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct Node *n){
    if(n!=NULL){
    printf("%d",n->data);
    preorder(n->left);
    preorder(n->right);
    }
}
void postorder(struct Node *n){
    if(n!=NULL){
    postorder(n->left);
    postorder(n->right);
    printf("%d",n->data);
    }
}
void inorder(struct Node *n){
    if(n!=NULL){
        inorder(n->left);
        printf("%d",n->data);
        inorder(n->right);
    }
}
struct Node *bst(struct Node *root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    else if(root->data>key){
        return bst(root->left,key);
    }
    else{
        return bst(root->right,key);
    }
}
int main(){
    struct Node *p=can(5);
    struct Node *p1=can(3);
    struct Node *p2=can(6);
    p->left=p1;
    p->right=p2;
    struct Node *p3=can(1);
    struct Node *p4=can(4);
    p1->left=p3;
    p1->right=p4;
    if(bst(p,7)!=NULL){
        printf("the value is present in the tree.\n");
    }
    else{
        printf("the value is not present in the tree.\n");
    }
    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);
    return 0; 
}