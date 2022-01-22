#include<stdio.h>
#include<stdlib.h>

struct node
{   
    int data;
    struct node *next;
};

struct node *head = NULL;

void addLast(int val)
{
    struct node *newNode=malloc(sizeof(struct node ));
    newNode->data=val;
    newNode->next=NULL;

    if(head==NULL){
         printf("%s ", "HEAD IS NULL");
        head=newNode;
    }
    else{
        struct node *temp=head;
        while (temp->next!=NULL)
        {
           temp=temp->next;
        }
        temp->next=newNode;
        
    }
	
}


void printList()
{
    struct node *temp = head;

    while(temp != NULL)
    {
         printf("%d ", temp->data);
         temp = temp->next;
    }
}

int main()
{
     addLast(10);
     addLast(20);
     addLast(30);
     addLast(40);
     addLast(50);
     addLast(60);

     printList();

     return 0;
}