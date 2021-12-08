#include<iostream>
#include<stdlib.h>
using namespace std;                                   
struct node{int data;                                   
struct node*left;                                  
struct node*right;                                    
};
struct node *newnode(int data){                //Function for creating a node
  struct node *n;
  n =(node*)malloc(sizeof(struct node));
  n->left=NULL;
  n->right=NULL;
  n->data=data;
  return n;  
}

void preorder(struct node * root)
{if (root!=NULL)
{
 cout<<root->data<<"\n";
 preorder(root->left);
 preorder(root->right);
}


}

void postorder(struct node*root)
{
  if(root!=NULL)
  {
 postorder(root->left);
 postorder(root->right);
 cout<<root->data<<"\n";
  }
}

void inorder(struct node*root)
{
  if(root!=NULL)
  {
 inorder(root->left);
 cout<<root->data<<"\n";
 inorder(root->right);
 
  }
}

int main()
{struct node *p;
p=newnode(2);            //Root node



struct node *p1;
p1=newnode(1);
p->left=p1;

struct node*p2;
p2=newnode(4);
p->right=p2;

struct node*p3;
p3=newnode(11);
p1->left=p3;

struct node*p4;
p4=newnode(12);
p1->right=p4;

struct node*p6;
p6=newnode(3);
p2->right=p6;

cout<<"THIS IS PREORDER TRAVERSAL\n";
preorder(p);
cout<<"THIS IS POSTOREDER TRAVERSAL\n";
postorder(p);
cout<<"THIS IS INORDER TRAVERSAL\n";
inorder(p);
return 0;
}