#include <iostream>
#include<stdlib.h>
using namespace std;

// Structure of Node.
struct Node
{
int data;
Node *link;
};

Node *Top = NULL;
Node *rear = NULL;



//function to enter elements in queue
void enqueue ( int value )
{
 Node *ptr = new Node();
 ptr->data= value;
 ptr->link = NULL;

 //If inserting the first element/node
 if( Top == NULL )
 {
  Top = ptr;
  rear = ptr;
 }
 else
 {
  rear ->link = ptr;
  rear = ptr;
 }
}

//function to delete/remove element from queue
void dequeue ( )
{
 if( Top == NULL && rear == NULL) 
 cout<<"Queue is empty\n";
 else
 //only one element/node in queue.
 if( Top == rear)
 {
  free(Top);
  Top = rear = NULL;
 }
 else
 {
  Node *ptr = Top;
  Top = Top->link;
  free(ptr);
 }
}


void displayQueue()
{
 if (Top == NULL && rear == NULL)
  cout<<"Queue is empty\n";
 else
 {
  Node *ptr = Top;
  while( ptr !=NULL)
  {
   cout<<ptr->data<<" ";
   ptr= ptr->link;
  }
 }
}

//Main Function
int main()
{
 int choice, value;
 while(1)
 {
  cout<<"\n1.enqueue 2.dequeue 3.display 4.exit\n";
  cout<<"Enter choice:";
  cout<<"\n";
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          enqueue(value);
          break;
  case 2: dequeue();
          break;
  case 3: displayQueue();
          break;
  case 4: exit(0);
          break;
  }
 }

 return 0;
}