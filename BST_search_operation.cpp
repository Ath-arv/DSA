//**ATHARV DASARE**//

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

void inorder(struct node*root)
{
  if(root!=NULL)
  {
 inorder(root->left);
 cout<<root->data<<"\n";
 inorder(root->right);
 
  }
}
struct node*search(struct node*root,int key)
{if(root==NULL)                        //if their is no root node(when we search after leaf nodes)
{
    return NULL;
}
if(root->data==key)     
{   
    return root;                   //returning pointer to display the data 
}
if(root->data<key)
{ return search(root->left,key);    //continuing search for key in left subtree
}
else{ return search(root->right,key); //continuing search for key in right subtree
}

}

int main()
{struct node *p;
p=newnode(7);            //Root node


//creating some nodes
struct node *p1;
p1=newnode(2);
p->left=p1;

struct node*p2;
p2=newnode(10);
p->right=p2;

struct node*p3;
p3=newnode(1);
p1->left=p3;

struct node*p4;
p4=newnode(5);
p1->right=p4;


/*cout<<"THIS IS PREORDER TRAVERSAL\n";
preorder(p);
cout<<"THIS IS POSTOREDER TRAVERSAL\n";
postorder(p);*/

cout<<"THIS IS INORDER TRAVERSAL\n";
inorder(p);
struct node*s=search(p,7);    //we are searching for 7
if(s!=NULL){
cout<<"FOUND "<<s->data;
}
else{cout<<"NOT FOUND!!!";}

return 0;
}