#include <iostream>
using namespace std;
struct stack
{
    int data;
    struct stack *link;
}*TOP=NULL;
void push(int val)
{
    struct stack *newnode;
    newnode=(struct stack*)malloc(sizeof(struct stack));
    newnode->data=val;
    if(TOP==NULL)
    newnode->link=NULL;
    else
    newnode->link=TOP;
    TOP=newnode;
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
        struct stack *t;
        t=TOP;
        TOP=TOP->link;
        d=t->data;
        free(t);
    }
    return d;
}
void print()
{
    
    struct stack *temp;
    temp=TOP;
    if(TOP==NULL)
    {cout<<"Stack underflow!!!";
    
    }
    while(temp->link!=NULL)
    {cout<<temp->data<<"==>";
      temp=temp->link;
    }
    cout<<"\n";
}
void peak()
  { if(TOP=NULL)
    {cout<<"Stack underflow!!";
    }
    else
    { cout<<TOP->data;
    }
  }

int main() 
{int choice,val;
cout<<"\n";
        cout<<"1.push  2.pop  3.print top element  4.Display  5.QUIT ";
        cin>>choice;
    while(1)
    {
        
        switch(choice)
        {
        
        case 1: cout<<"Enter the element to push";
                   cin>>val;
                   push(val); 
                   break;
        case 2:val=pop();
               cout<<"Deleted element:"<<val;
                   break;
       case 3: cout<<"The top most element is:";
                   peak();
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