#include <stdio.h>
#include<stdlib.h>

typedef struct StackNode{
    int data;
    struct StackNode * next;
}node;
node *top=NULL;
void push()
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
}

void pop()
{
   node *newnode;
   newnode=top;
   int temp=newnode->data;
   top=top->next;
   free(newnode);
   printf("%d popped",temp);
}

void display()
{
    node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("stack underflow");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }    
}


void main()
{
    printf("*****************stack********************\n");
    int n;
    do{
        printf("\n1.push\n2.pop\n3.diplay\n4.exit\nEnter your choice");
        scanf("%d",&n);
        switch(n)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("EXITED"); break;
            default: printf("invalid input , try again");
        }
    } while(n!=4);
}