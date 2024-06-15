#include<stdio.h>
#include<stdlib.h>
struct quea{
    int size;
    int n;
    int r;
    int *arr;
};
int isEmpty(struct quea *q){
    if(q->n==q->r){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct quea *q){
    if(q->r==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enquea(struct quea *q,int data){
    if(isFull(q)){
        printf("The quea is full.");
    }
    else{
        q->r++;
        q->arr[q->r]=data;
    }
}
int dequea(struct quea *q){
    int var=-1;
    if(isEmpty(q)){
        printf("The quea is empty\n");
        
    }
    else
    {
        
    
        q->n++;
        var=q->arr[q->n];
        
    }
    return var;
}


int main(){
    struct quea p;
    p.size=5;
    p.n=p.r=-1;
    p.arr=(int *)malloc(p.size*sizeof(int));
    printf("the quea is empty: %d\n",isEmpty(&p));
    printf("the quea is full: %d\n",isFull(&p));
    enquea(&p,67);
    enquea(&p,45);
    enquea(&p,23);
    enquea(&p,12);
    enquea(&p,98);
    printf("the quea is empty: %d\n",isEmpty(&p));
    printf("the quea is full: %d\n",isFull(&p));
    int o=dequea(&p);
    printf("the delated element is %d\n",o);
    printf("the quea is empty: %d\n",isEmpty(&p));
    printf("the quea is full: %d\n",isFull(&p));
    return 0;
}