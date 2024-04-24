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
       end();
    }
    else if(pos==1)
    {
        beginning();
    }
    else if(pos>count)
    {
        printf("Data can not be inserted at %d position as list has only %d nodes\n",pos,count);
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
    int n;
    printf("enter the number of nodes you want to create");
    scanf("%d",&n);
    printf("enter the data in each node");
    for(int i=0;i<n;i++)
    {
        create();
    }
    int choice;
    do{
        printf("select the operation:\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
              int choice_insert;
              printf("select how you want to insert the node:\n1.In the beginning\n2.At a specific position\n3.At the end\n");
              scanf("%d",&choice_insert);
              switch(choice_insert)
              {
                case 1: insert_beginning(); break;
                case 2: insert_pos(); break;
                case 3: insert_end(); break;
                default: printf("Invalid input. Try again.\n");
              }
              break;
            case 2:
               int choice_delete;
               printf("select how you want to delete the node:\n1.From the beginning\n2.From a specific position\n3.Last node\n");
               scanf("%d",&choice_delete);
               switch(choice_delete)
               {
                 case 1: delete_beginning(); break;
                 case 2: delete_pos(); break;
                 case 3: delete_end(); break;
                 default: printf("Invalid input. Try again.\n");
               }
               break;
            case 3: display(); break;
            case 4: printf("EXITED"); break;
            default: printf("Invalid input, try again\n");
        }
    }while(choice!=4);
}