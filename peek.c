// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *s, int value)
{
    if (isFull(s))
    {
        printf("stack is overflow.\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = value;
    }
}
int pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("stack is empty.");
        return s->top;
    }
    else
    {
        int val = s->arr[s->top];
        s->top--;
        return val;
    }
}
int peek(struct stack *s, int index)
{
    int arri = s->top - index + 1;
    if (arri < 0)
    {
        printf("Not a valid position for stack.\n");
        return -1;
        
    }
    else
    {
       return s->arr[arri]; 
    }
}
int main()

{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf(" is full:%d\n", isFull(s));
    printf("is empty:%d\n", isEmpty(s));
    push(s, 67);
    push(s, 67);
    push(s, 67);
    push(s, 56);
    push(s, 90);
    push(s, 77);
    push(s, 67);
    push(s, 67);
    push(s, 67);
    push(s, 67);
    push(s, 67);
    push(s, 67);
    printf("is full:%d\n", isFull(s));
    printf("is Empty:%d\n", isEmpty(s));
    int value = pop(s);
    printf("the value is popped is %d.\n", value);
    printf("is full:%d\n", isFull(s));
    printf("is Empty:%d\n", isEmpty(s));
    for(int j=1;j<=s->top+1;j++){
        printf("the element at position %d is %d.\n",j,peek(s,j));
    }
    printf("%d",peek(s,6));
    return 0;
}
