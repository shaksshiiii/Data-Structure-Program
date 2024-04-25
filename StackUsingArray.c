#include<stdio.h>
int top=-1;
#define maxsize 10
int arr[maxsize];

void push()
{
    if(top==maxsize-1)
    {
        printf("stack overflow");
    }
    else{
        int data;
        printf("enter the data:");
        scanf("%d",&data);
        top++;
        arr[top]=data;
    }
}
void pop()
{
   if(top==-1)
   {
       printf("stack underflow\n");
   }
   else{
       int temp;
       arr[top]=temp;
       top--;
       printf("Popped Element:%d\n",temp);
   }
}
void display()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else{
        printf("Elements of stack are:\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",arr[i]);
        }
    }

}
void main()
{
     printf("****************STACK****************\n");
    int choice;
    do{
        printf("enter choice:\n1.push\n2.pop\n3.display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("EXITED"); break;
            default: printf("Invalid input,try again.\n");
        }
    }while(choice!=4);
}
