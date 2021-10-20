#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *link;
	
};
int main()
{ struct Node *n1,*n2,*n3,*n4,*n5;
n1=(Node*)malloc(sizeof(struct Node));
n1->data=5;
n1->link=NULL;

n2=(Node*)malloc(sizeof(struct Node));
n2->data=4;
n2->link=NULL;
n1->link=n2;

n3=(Node*)malloc(sizeof(struct Node));
n3->data=3;
n3->link=NULL;
n2->link=n3;
n4=(Node*)malloc(sizeof(struct Node));
n4->data=2;
n4->link=NULL;
n3->link=n4;
n5=(Node*)malloc(sizeof(struct Node));
n5->data=1;
n5->link=NULL;
n4->link=n5;
cout<<"the existing linked list";
struct Node *temp=n1;
cout<<"\n ";
while(temp!=NULL)
{cout<<temp->data<<"==>";
temp=temp->link;
}
return 0;
}
