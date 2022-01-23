#include<stdio.h>
  
#define size 3
int arr[size];

int front  = 0;
int rear   = 0;



void enqueue(int val)
{
    if(isQueueFull())
        return;
    else
        arr[rear++] = val; 
}


int dequeue()
{
    if(isQueueEmpty())
        return -1;
    else
        return arr[front++];   
}
int isQueueFull()
{
    if(rear == size)
        return 1;
    return 0;
}
int isQueueEmpty()
{
    if(front==rear){
        return 1;
    }
    return 0;
    
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());

    return 0;
}