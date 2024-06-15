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
int peek(struct Node *top,int pos){
    struct Node *n=top;
    for(int i=0;i<pos-1 && n!=NULL;i++){
       n=n->next;
    }
    return n->data;
}
int stacktop(struct Node *top){
    return top->data;
}
int stackbot(struct Node *top){
    struct Node *n=top;
    while(n->next!=NULL){
        n=n->next;
    }
    return n->data;
}
int main(){
    top=push(top,78);
    top=push(top,67);
    top=push(top,45);
    linkedlist(top);
    int e=pop(top);
    printf("popped element is %d\n",e);
    linkedlist(top);
    int x=peek(top,1);
    printf("%d\n",x);
    printf("the top element is %d\n",stacktop(top));
    printf("the element at bottom is %d\n",stackbot(top));
    return 0;
}

