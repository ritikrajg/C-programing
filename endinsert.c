#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void printli(struct Node *h){
     while(h!=NULL){
        printf("%d\n",h->data);
        h=h->next;
     }
     printf("\n");
}
struct Node *endindex(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *h=head;
    while(h->next!=NULL){
        h=h->next;
    }
    printf("\n");
    ptr->data=data;
    h->next=ptr;
    ptr->next=NULL;
    return head;
}
struct Node *insertafternode(struct Node *head,struct Node *prenode,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=prenode->next;
    prenode->next=ptr;
    ptr->data=data;
    return head;

}
int main(){
    int d;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=67;
    head->next=second;
    second->data=78;
    second->next=third;
    third->data=34;
    third->next=fourth;
    fourth->data=56;
    fourth->next=NULL;
    printli(head);
    head=endindex(head,98);
    printli(head);
    head=insertafternode(head,third,87);
    printli(head);
    return 0;
}