#include<stdio.h>
#define MAXSIZE 10
int queue[MAXSIZE];
int front=-1,rear=-1;
void enqueue()
{
    int data;
    if(rear==-1 && front==-1)
    {
        printf("enter data");
        scanf("%d",&data);
        rear=front=0;
        queue[rear]=data;
        printf("%d Enqueue\n",data);
    }
    else if(front==(rear+1)%MAXSIZE)
    {
        printf("Queue overflow\n");
    }
    else{
        printf("enter data");
        scanf("%d",&data);
        rear=(rear+1)%MAXSIZE;
        queue[rear]=data;
        printf("%d Enqueue\n",data);
    }  
}
void dequeue()
{
    int temp;
    temp=queue[front];
    if(rear==-1 && front==-1)
    {
        printf("Queue underflow\n");
    }
    else if(rear==front)
    {
        rear=front=-1;
        printf("%d Dequeued\n",temp);
    }
    else{
        front=(front+1)%MAXSIZE;
        printf("%d Dequeued\n",temp);
    }
}
void display()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue underflow\n");
    }
    else{
        int i=front;
        while(i!=rear)
        {
            printf("%d\n",queue[i]);
            i=(i+1)%MAXSIZE;
            
        }
        printf("%d\n",queue[rear]);
    }
}
void main()
{
    int choice;
    printf("****************QUEUE***************\n"); 
    do{
    printf("1.enqueue\n2.dequeue\n3.display\n4.Exit\nEnter your choice");
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