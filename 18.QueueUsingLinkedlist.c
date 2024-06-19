#include<stdio.h>
#include<stdlib.h>

typedef struct queuenode{
    int data;
    struct queuenode * next;
}node;
node * front=NULL,*rear=NULL;

void enqueue()
{
   node *newnode;
   newnode=(node*)malloc(sizeof(node));
   printf("enter data");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   if(front==NULL && rear==NULL)
   {
       front=newnode;
       rear=newnode;
   }
   else{
       rear->next=newnode;
       rear=newnode;
   }
}

void dequeue()
{
    if(front==NULL)
    {
        printf("queue underflow\n");
    }
    else{
        node *temp;
        temp=front;
        front=front->next;
        printf("%d dequeued\n",temp->data);
        free(temp);
    }
    
}

void display()
{
    if(front==NULL)
    {
        printf("queue underflow\n");
    }
    else{
        node *temp;
        temp=front;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}


void main()
{
    int choice;
    do{
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: printf("EXITED"); break;
            default: printf("invalid input");
        }
    }while(choice!=4);
}
