//to create and traverse in a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *address;
}node;
node *head,*new,*temp;

void create()   
{
    new=(node*)malloc(sizeof(node));
    printf("enter data in node");
    scanf("%d",&new->data);
    new->address=NULL;
    if(head==NULL)
    {
        head=new;
        temp=new;
    }
    else{
        temp->address=new;
        temp=new;
    }
    

}
void display()
{
    node *ptr;
    ptr=head;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        printf("elemnts of the linked list are\n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->data);
            ptr=ptr->address;
        }
    }
}
void main()
{   
    
    int choice;
    do{         //loop has to be excuted atleast once
    printf("1.create\n2.display\n3.exit\n");
    printf("enter the choice:");
    scanf("%d",&choice);
    {
    switch(choice)
    {
        case 1: create(); break;
        case 2: display(head); break;
        case 3: printf("exted"); break;
        default: printf("invalid input. try again\n");
    }
    }
}
 while(choice!=3);
}
