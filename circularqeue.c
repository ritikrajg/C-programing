#include<stdio.h>
#include<stdlib.h>
struct qeue{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct qeue *q){
    if(q->r==q->f){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct qeue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    else{
        return 0;
    }
}
void enqeue(struct qeue *q,int val){
    if(isFull(q)){
        printf("The qeue is overflow.\n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("the inserted element value is %d.\n",q->arr[q->r]);
    }
}
int deqeqe(struct qeue *q)
{
    int a=-1;
    if(isEmpty(q)){
        printf("The qeue is underflow.\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        return q->arr[q->f];
    }
}

int main(){
    struct qeue q;
    q.size=4;
    q.f=q.r=0;
    q.arr=(int *)malloc(q.size*sizeof(int));
    enqeue(&q,78);
    //enqeue(&q,78);
    //enqeue(&q,78);
    //enqeue(&q,78);
    //printf("dequeing element is %d.\n",deqeqe(&q));
    if(isEmpty(&q)){
        printf("the quea is empty.\n");
    }
    if(isFull(&q)){
        printf("the quea is full.\n");
    }
    return 0;
}