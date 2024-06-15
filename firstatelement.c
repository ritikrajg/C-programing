#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *firstinsert(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
void linkedlist(struct Node *h){
     while(h!=NULL){
        printf("%d\n",h->data);
        h=h->next;
    }
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
    
    printf("Enter the first element: ");
    scanf("%d",&head->data);
    head->next=second;
    printf("Enter the second element: ");
    scanf("%d",&second->data);
    second->next=third;
    printf("Enter the third element: ");
    scanf("%d",&third->data);
    third->next;
    printf("Enter the fourth element: ");
    scanf("%d",&fourth->data);
    fourth->next=NULL;
    linkedlist(head);
    printf("Enter the new data data which you want to insert at firs");
    scanf("%d",&d);
    head=firstinsert(head,d);
    linkedlist(head);
    return 0;
}