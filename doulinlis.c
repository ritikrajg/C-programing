#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *pre;
    struct Node *next;
};
void transfor(struct Node *head){
    struct Node *p=head;
    do{
        printf("%d\n",p->data);
        p=p->next;
    }while(p!=NULL);
}
void transback(struct Node *last){
    struct Node *p=last;
    do{
        printf("%d\n",p->data);
        p=p->pre;
    }while(p!=NULL);
}
int main(){
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
    head->pre=NULL;
    second->data=44;
    second->next=third;
    second->pre=head;
    third->data=34;
    third->next=fourth;
    third->pre=second;
    fourth->data=23;
    fourth->next=NULL;
    fourth->pre=third;
    transfor(head);
    printf("Backward\n");
    transback(fourth);
return 0;
}