#include<stdio.h>
#include<stdlib.h>
  
 typedef struct treeNode{
     int data;
     struct treeNode *left;
     struct treeNode *right;
 }node;
  
node* create()
 {
    int x;
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("enter data or enter -1 for no node:\n");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter left child of %d\n",x);
    newnode->left=create();
    printf("Enter right child of %d\n",x);
    newnode->right=create();
    return newnode;
 }
 
 
void main()
{
    node * root;
    root=0;
    root=create();
}