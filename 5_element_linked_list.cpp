#include<iostream>
#include<malloc.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
	
}*FIRST=NULL;
int main()
{ struct Node *n1,*n2,*n3,*n4,*n5;
n1=(Node*)malloc(sizeof(struct Node));
n1->data=5;
n1->next=NULL;
FIRST=n1;
n2=(Node*)malloc(sizeof(struct Node));
n2->data=4;
n1->next=n2;
n3=(Node*)malloc(sizeof(struct Node));
n3->data=3;
n2->next=n3;
n4=(Node*)malloc(sizeof(struct Node));
n4->data=2;
n3->next=n4;
n5=(Node*)malloc(sizeof(struct Node));
n5->data=1;
n4->next=n5;
cout<<"the existing linked list";
struct Node *temp=FIRST;
cout<<"\n ";
while(temp!=NULL)
{cout<<temp->data<<"==>";
temp=temp->next;
}
return 0;
}
