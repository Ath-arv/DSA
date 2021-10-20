#include <iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
}*TOP=NULL;
void push(int val)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    
    if(newnode==NULL)
    {
    cout<<"stack overflow!";
    exit (1);
    }
    else
    {newnode->data=val;
    newnode->link=NULL;
    newnode->link=TOP;
    TOP=newnode;
    }
}

int pop()
{   int d=0;
    if(TOP==NULL)
    {
    cout<<"\n Stack is Empty!!!";
    return d;
    }
    else
    {
        struct node *t;
        t=TOP;
        TOP=TOP->link;
        d=t->data;
        free(t);
    }
    return d;
}
void print()
{
    
    struct node *temp;
    temp=TOP;
    if(TOP==NULL)
    {cout<<"Stack underflow!!!";
    exit(1);
    }
    while(temp->link!=NULL)
    {cout<<temp->data<<"===>";
      temp=temp->link;
    }
    cout<<temp->data;
}
int peak()
  { if(TOP==NULL)
    cout<<"Stack underflow!!";
    return TOP->data;
  }

int main() 
{
    int choice,val;

        
    while(1)
    {   cout<<"\n";
        cout<<"1.push  2.pop  3.print top element  4.Display  5.QUIT ";
        cin>>choice;
        
        switch(choice)
        {
        
        case 1: cout<<"Enter the element to push";
                   cin>>val;
                   push(val); 
                   break;
       case 2:
                  val=pop();
               cout<<"Deleted element:"<<val;
                   break;
       case 3: cout<<"The top most element is:"<< peak();
                   
                   break;
       case 4: cout<<"The elements are:";
                   print();
                   break;
       case 5: cout<<"QUIT";
                exit(1);
                break;
      
       default:cout<<"Wrong choice";
        }
       
    
    }
	
	return 0;
}
