#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;

    newNode->next = head;
    head=newNode;
}

int pop()
{
    struct node *temp;
    if(head==NULL){
        return 0;
    }
    else{
       
        temp=head;
        head=temp->next;
        printf("%d",temp->data);
        free(temp);
        return 1;
    }
    
}

int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    // printf("%d ",pop());
    // printf("%d ",pop());
    push(40);
    pop();
    pop();
    pop();
    // printf("%d ",pop());
    // printf("%d ",pop());
    // printf("%d ",pop());

    return 0;
}