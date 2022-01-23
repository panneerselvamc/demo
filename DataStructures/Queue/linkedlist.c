#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if (front == NULL && rear == NULL)
        front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue()
{
    struct node *temp;

    if (front == NULL)
    {
        printf("NO NODES AVAILABLE TO DELETE");
    }
    else
    {
        temp = front;
        printf("%d", temp->data);
        front = front->next;
        free(temp);
    }
}
int main()
{
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    dequeue();

    return 0;
}