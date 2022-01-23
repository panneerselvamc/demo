#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void addLast(int val)
{
   struct node *newNode = malloc(sizeof(struct node));
    newNode->data=val;
     if(head==NULL){
        newNode->next=NULL;
        newNode->prev=NULL;
        head=newNode;
    }
    else{
        struct node *last=head;
        while (last->next!=NULL)
        {
          last=last->next;
        }
        last->next=newNode;
        newNode->prev=last;
        newNode->next=NULL;
        
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
    addLast(10);
    addLast(20);
    addLast(30);

    printList();

    return 0;
}