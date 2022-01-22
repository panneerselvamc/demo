#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void addFirst(int val)
{
  struct node *newNode = malloc(sizeof(struct node));
    newNode->data=val;
    if(head==NULL){
        newNode->next=NULL;
        newNode->prev=NULL;
        head=newNode;
    }
    else{
        newNode->prev=NULL;
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
    
    
}

void printList()
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    addFirst(10);
    addFirst(20);
    addFirst(30);
    
    printList();
}