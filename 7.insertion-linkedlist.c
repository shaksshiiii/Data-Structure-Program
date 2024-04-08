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
void beginning()
{ 
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("enter data to insert in the beginnig");
    scanf("%d",&ptr->data);
    ptr->address=head;
    head=ptr;

}
void end()
{
    node *ptr,*p;
    ptr=(node*)malloc(sizeof(node));
    p=(node*)malloc(sizeof(node));
    printf("enter data to insert in the end");
    scanf("%d",&ptr->data);
    ptr->address=NULL;
    p=head;
    while(p->address!=NULL)
    {
        p=p->address;
    }
    p->address=ptr;
}
void pos()
{  
    int index;
    node *ptr,*p;
    ptr=(node*)malloc(sizeof(node));
    p=(node*)malloc(sizeof(node));
    printf("enter the index at which you want to enter the data");
    scanf("%d",&index);
    printf("enter data to insert on that index ");
    scanf("%d",&ptr->data);
    p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->address;
        i++;
    }
    ptr->address=p->address;
    p->address=ptr;
}
void display()
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr=head;
    if (head==NULL)
    {
        printf("list is empty");
    }
    else{
        printf("elements of linked list are");
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
    do{
    printf("1.create\n2.insert at beginning\n3.insert at end\n4.insert at required position\n5.display\n6.exit\n");
    printf("enter the choice:");
    scanf("%d",&choice);
    {
    switch(choice)
    {
        case 1: create(); break;
        case 2: beginning(); break;
        case 3: end(); break;
        case 4: pos(); break;
        case 5: display(head); break;
        case 6: printf("exited"); break;
        default: printf("invalid input. try again\n");
    }
    }
}
 while(choice!=6);
}
