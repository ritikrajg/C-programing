#include<stdio.h>
#include<stdlib.h>
struct Node *f=NULL;
struct Node *r=NULL;
struct Node{
    int data;
    struct Node *next;
};
void trans(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void enquea(int val){
    struct Node *q=(struct Node *)malloc(sizeof(struct Node));
    if(q==NULL){
        printf("the quea is full.\n");
    }
    else{
        q->data=val;
        q->next=NULL;
        
        if(f==NULL){
            f=r=q;
        }
        else{
            r->next=q;
            r=q;
        }
    }
}
int dequea(){
    struct Node *ptr=f;
    int val=-1;
    if(f==NULL){
        printf("the stack is Empty.\n");
    }
    else{
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}
int main(){
    trans(f);
    enquea(56);
    enquea(45);
    enquea(12);
    enquea(98);
    trans(f);
    printf("the delated element is %d.\n",dequea(f));
    trans(f);
    return 0;
}