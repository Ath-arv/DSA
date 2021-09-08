#include<iostream>
using namespace std;
struct Book
{ string Title;
   string Author;
  int Edition;
  string Publication;
  int cost;

};

int main()
{
	struct Book detail[1];
	
	for(int i=0;i<6;i++)
	{ cout<<"Book "<<i+1<<endl;
	cout<<"Enter title"<<endl;
	cin>>detail[i].Title;
	cout<<"Enter Author"<<endl;
	cin>>detail[i].Author;
	cout<<"Enter Edition"<<endl;
	cin>>detail[i].Edition;
	cout<<"Enter publication"<<endl;
	cin>>detail[i].Publication;
	cout<<"Enter cost"<<endl;
	cin>>detail[i].cost;
}

for(int i=0;i<6;i++)
	{ cout<<"Book "<<i+1<<endl;
	cout<<"Title :"<<detail[i].Title<<endl;
	
	cout<<" Author :"<<detail[i].Author<<endl;
	
	cout<<" Edition :"<<detail[i].Edition<<endl;
	
	cout<<"publication :"<<detail[i].Publication<<endl;
	
	cout<<" cost"<<detail[i].cost<<endl;
	
	}
}
