#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *p){
    if(p->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *p){
    if(p->top==p->size-1){
         return 1;
    }
    else{
        return 0;
    }
}
int main(){
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    s->arr[0]=56;
    s->top++;
    
    if(isEmpty(s)){
        printf("The stack is Empty.");
    }
    else{
        printf("the stack is not empty.");
    }
    return 0;
}