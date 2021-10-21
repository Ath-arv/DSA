#include<iostream>
#include<stdlib.h>

using namespace std;
struct node {
	
	struct node*prev;
	int data;
	struct node*next;	                                       	 
		                                             
};

struct node *addtoempty(struct node*head,int data)
{
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->data=data;
	temp->next=NULL;
	head=temp;
	return head;
};

struct node*addAtbeg(struct node*head,int val)
{ struct node*temp=(struct node*)malloc(sizeof(struct node));
temp->prev=NULL;
temp->data=val;
temp->next=NULL;
temp->prev=head;
head->prev=temp;
head=temp;
return head;
};






struct node*addAfterpos(struct node*head,int data,int position){
	
	struct node*newp=NULL;
	struct node*temp=head;
	struct node*temp2=NULL;
	newp=addtoempty(newp,data);
	
	while(position !=1)
	{ 
	temp=temp->next;
	position--;
	}
	 if(temp->next==NULL){
		temp->next=newp;
		newp->prev=temp;
	}
	else{
		temp2=temp->next;
		temp->next=newp;
		temp2->prev=newp;
		newp->next=temp2;
		newp->prev=temp;
	}
	return head;
};


int main(){
    struct node*head=NULL;
    struct node*ptr;
	int choice,data,position;
	
		while(1)
	{
	
		cout<<"Menu\n";
		cout<<"Press 1 to Add something to empty list\n";
		cout<<"Press 2 to insert at the beginning\n";
		cout<<"press 3 to insert at specific position\n";
		cout<<"Press 4 to display\n";
		cout<<"Press 5 exit\n";
		cout<<"Enter Choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the data:";
				cin>>data;
				head=addtoempty(head,data);
				break;
			case 2:
				cout<<"Enter the data:";
				cin>>data;
				head=addAtbeg(head,data);
				break;
			case 3:
			 cout<<"Enter position:";
			       cin>>position;
			       cout<<"Enter data:";
			       cin>>data;
				head=addAfterpos(head,data,position);
				break;
			case 4:while(ptr!=NULL)
			       {
	              cout<<ptr->data;
	               ptr=ptr->next;
			       }
			break;
			case 5:
				exit(1);
				
				default:cout<<"Wrong choice!!!";
		}
    }
	return 0;	
}







