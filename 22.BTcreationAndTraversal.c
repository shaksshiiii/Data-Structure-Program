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
 
 void preorder(node * root)
 {
     if(root==0)
     {
         return ;
     }
     else
     {
         printf("%d ",root->data);
         preorder(root->left);
         preorder(root->right);
     }
     
 }
 
 void postorder(node * root)
 {
     if(root==0)
     {
         return ;
     }
     else
     {
         postorder(root->left);
         postorder(root->right);
         printf("%d ",root->data);
     }
 }
 
 void inorder(node * root)
 {
     if(root==0)
     {
         return ;
     }
     else
     {
         inorder(root->left);
         printf("%d ",root->data);
         inorder(root->right);
     }
 }
 
void main()
{
    int n;
    node * root;
    root=0;
    root=create();
    printf("1.Preorder\n2.Inorder\n3.Postorder\nenter how would you like to traverse the binary tree:");
    scanf("%d",&n);
    if(n==1)
        preorder(root);
    else if(n==2)
        inorder(root);
    else if(n==3)
        postorder(root);
    else
       printf("invalid input");
}