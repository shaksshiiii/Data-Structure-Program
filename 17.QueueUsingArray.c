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
    else if(rear==MAXSIZE-1)
    {
        printf("Queue overflow\n");
    }
    else{
        printf("enter data");
        scanf("%d",&data);
        rear++;
        queue[rear]=data;
        printf("%d Enqueue\n",data);
    }  
}
void dequeue()
{
    int temp;
    temp=queue[rear];
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
        front++;
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
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
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