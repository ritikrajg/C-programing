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
void pretrans(struct Node *root)
{
    if(root != NULL){
    printf("%d ",root->data);
    pretrans(root->left);
    pretrans(root->right);
    }
}
void posttrans(struct Node *root){
    if(root != NULL){
        posttrans(root->left);
        posttrans(root->right);
        printf("%d ",root->data);
    }
}
void intrans(struct Node *root)
{
    if(root != NULL){
        intrans(root->left);
        printf("%d ",root->data);
        intrans(root->right);
    }
}

int main(){
    struct Node *p=can(1);
    struct Node *p1=can(2);
    struct Node *p2=can(3);
    
    struct Node *p3=can(4);
    struct Node *p4=can(5);
    
    struct Node *p5=can(6);
    struct Node *p6=can(7);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    pretrans(p);
    printf("\n");
    posttrans(p);
    printf("\n");
    intrans(p);
    return 0;
}