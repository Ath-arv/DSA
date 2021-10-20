#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{int data;
struct node *link;

}*head;
int ins(int val)
{ struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=val;
newnode->link=NULL;
struct node*ptr;
ptr=head;
while(ptr->link!=NULL)
{ ptr=ptr->link;
}
ptr->link=newnode;
return 0;

}
void print()
{  struct node*temp=head;
    while(temp!=NULL)
    {
    cout<<temp->data<<"==>";
    temp=temp->link;
    }

}
int main()
{ int val;
    struct node *n1,*n2,*n3;
n1=(struct node*)malloc(sizeof(struct node));
head=n1;
n1->data=1;
n1->link=NULL;
n2=(struct node*)malloc(sizeof(struct node));
n2->data=2;
n2->link=NULL;
n1->link=n2;
n3=(struct node*)malloc(sizeof(struct node));
n3->data=3;
n3->link=NULL;
n2->link=n3;
cout<<"Before insertion:\n";
print();
cout<<"Enter the no.: ";
cin>>val;
ins(val);
cout<<"\nAfter insertion:";
print();
return 0;
}