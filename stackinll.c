#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *top=NULL;
void linkedlist(struct Node *top){
    while(top!=NULL){
        printf("%d\n",top->data);
        top=top->next;
    }
}
int isEmpty(struct Node *top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Node *top){
    struct Node *p=(struct Node *)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct Node *push(struct Node *top,int data){
    
    if(isFull(top)){
        printf("stact overflow.\n");
    }
    else{
        struct Node *n=(struct Node *)malloc(sizeof(struct Node));
        n->data=data;
        n->next=top;
        top=n;
        return top;
    }
}
int pop(struct Node *tp){
    if(isEmpty(tp)){
        printf("stact underflow.\n");
    }
    else{
        struct Node *n=top;
        top=(tp)->next;
        int x=n->data;
        free(n);
        return x;
    }
}

int main(){
    top=push(top,78);
    top=push(top,67);
    top=push(top,45);
    linkedlist(top);
    int e=pop(top);
    printf("popped element is %d\n",e);
    linkedlist(top);
    return 0;
}

