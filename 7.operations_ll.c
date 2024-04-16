#include<stdio.h>
#include<stdlib.h>
int count;
typedef struct node{
    int data;
    struct node *address;
}node;
node *head,*new,*temp;
void create()
{
    new=(node*)malloc(sizeof(node));
    // printf("enter data in node");
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
    printf("**A node with %d data is inserted at the beginning**\n",ptr->data);
    count++;
}
void end()
{
    node *ptr,*p;
    ptr=(node*)malloc(sizeof(node));
    p=(node*)malloc(sizeof(node));
    printf("Enter data to insert in the end");
    scanf("%d",&ptr->data);
    ptr->address=NULL;
    p=head;
    while(p->address!=NULL)
    {
        p=p->address;
    }
    p->address=ptr;
    printf("**A node with %d data is inserted the end**\n",ptr->data);
    count++;
}
void pos()
{  
    int pos;
    node *ptr,*p;
    ptr=(node*)malloc(sizeof(node));
    p=(node*)malloc(sizeof(node));
    printf("Enter the position at which you want to enter the data");
    scanf("%d",&pos);
    if(pos==count+1)
    {
       printf("Enter data to insert in the end");
       scanf("%d",&ptr->data);
       ptr->address=NULL;
       p=head;
       while(p->address!=NULL)
       {
          p=p->address;
       }
       p->address=ptr;
       printf("**A node with %d data is inserted at %dth position i.e. end**\n",ptr->data,pos);
       count++;
    }
    else if(pos>count)
    {
        printf("Data can not be inserted at %dth position as list has only %d nodes\n",pos,count);
    }
    else{
    printf("Enter data to insert at that position:");
    scanf("%d",&ptr->data);
    p=head;
    int i=1;
    while(i!=pos-1)
    {
        p=p->address;
        i++;
    }
    ptr->address=p->address;
    p->address=ptr;
    printf("**A node with %d data is inserted at the %d index**\n",ptr->data,pos);
    count++;
    }

}
void delete_start()
{   
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr=head;
    head=head->address;
    free(ptr);
    printf("**First node deleted**\n");
    count--;
}
void delete_end()
{
    node *ptr, *pre_ptr;
    ptr=(node*)malloc(sizeof(node));
    pre_ptr=(node*)malloc(sizeof(node));
    pre_ptr=head;
    ptr=head->address;
    while(ptr->address!=NULL)
    {
        ptr=ptr->address;
        pre_ptr=pre_ptr->address;
    }
    pre_ptr->address=NULL;
    free(ptr);
    printf("**Last node deleted**\n");
    count--;

}
void delete_pos()
{
    node *ptr, *pre_ptr;
    ptr=(node*)malloc(sizeof(node));
    pre_ptr=(node*)malloc(sizeof(node));
    pre_ptr=head;
    ptr=head->address; 
    int pos;
    printf("Enter the index of node which you want to delete");
    scanf("%d",&pos);
    if(pos>count)
    {
        printf("No data exists at %dth position as list has only %d nodes\n",pos,count);
    }
    else{
    for(int i=1;i<pos-1;i++)
    {
        ptr=ptr->address;
        pre_ptr=pre_ptr->address;
    } 
    pre_ptr->address=ptr->address;
    free(ptr);
    printf("**Node at %dth position deleted**\n",pos);
    count--;
    }
}
void display()
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr=head;
    if (head==NULL)
    {
        printf("list is empty\n");
    }
    else{
        printf("Elements of linked list are:\n");
        while(ptr!=NULL)
        {
        printf("%d\n",ptr->data);
        ptr=ptr->address;
        }
    }
    
}
void main()
{   
    int n,choice;
    printf("Enter the number of nodes you want in the list:");
    scanf("%d",&n);
    count=n;
    printf("Enter data in each node:");
    for(int i=0;i<n;i++)
    {
        create();
    }
    do{
    printf("Select the operation:\n1.Insert at beginning\n2.Insert at end\n3.Insert at required position\n4.Delete first node\n5.Delete last node\n6.Delete a node at a particular index\n7.Display\n8.Exit\n");
    printf("Enter the choice:");
    scanf("%d",&choice);
    {
    switch(choice)
    {
        case 1: beginning(); break;
        case 2: end(); break;
        case 3: pos(); break;
        case 4: delete_start(); break;
        case 5: delete_end(); break;
        case 6: delete_pos(); break;
        case 7: display(head); break;
        case 8: printf("EXITED"); break;
        default: printf("Invalid input.Try again\n");
    }
    }
}
 while(choice!=8);
}
