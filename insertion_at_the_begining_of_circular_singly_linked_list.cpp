#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
	
};
struct Node*Addempty(int data)
{struct Node*temp=(Node*)malloc(sizeof(struct Node));
temp->data=data;
temp->next=temp;
return temp;
}
struct Node*AddBeg(struct Node* tail,int data)              //creating Function to add node at the beginning    
{
    struct Node*newp=(Node*)malloc(sizeof(struct Node));   //creating a new node
newp->data=data;
newp->next=tail->next;                                                                    
tail->next=newp;
return tail;
}
void print(struct Node*tail)                             //creating function to print nodes
{
    struct Node*p=tail->next;
    do
    {
        cout<<p->data;
        p=p->next;
    } while (p!=tail->next);
    
}
int main()
{ struct Node*tail;
tail=Addempty(22);
tail=AddBeg(tail,3);
print(tail);
return 0;
}