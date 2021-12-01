#include<iostream>
#include<conio.h>

using namespace std;
#define size 5
int arr[size];
int Top=-1;               //For first value
int rear=-1;              //for last;
void enqueue()            
{   int val;
    if(rear==size-1)       
    { cout<<"Full!!!";

    }
else{ if(Top==-1)
      { Top=0;
      }
    rear++;
    cout<<"Enter value:";
    cin>>val;
    arr[rear]=val;
    }

}
void dequeue()
{if(Top==-1 || Top>rear)
   {
    cout<<"Underflow!!!"; 
   }
else{cout<<"The dequeued value="<<arr[Top];
    Top++;   
    }

}

void display()
{    int temp1,temp2;
     temp1=Top;
     temp2=rear;

    cout<<"The queue is:"<<"\n";
    while(temp1<=temp2)
    {
        cout<<arr[temp1];
        cout<<"\n";
        temp1++;
    }
}
int main()

{ int c;
    cout<<"***** Array Implememtation of queue Menu Driven program ***** \n";
cout<<"Press 1.enqueue   2.dequeue   3.display   4.exit ";
while (1)
{ cout<<"\nEnter your choice:";
   cin>>c;
    switch(c)
    {
        case 1:enqueue();
        break;
        case 2:dequeue();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        break;
        default:cout<<"Wrong choice!!!";    } 
}

return 0;

}
