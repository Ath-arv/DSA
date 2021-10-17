#include <iostream>
using namespace std;

int arr[100];

int top = -1;
void push(int x)
{
    if (top >= 4)
    {
        cout << "stack overflow\n";
    }
    else
    {
        top++;
        arr[top] = x;
    }
}
void pop()
{ int i=0;
    if (top == -1)
    {
        cout << "No element is stack\n";
    }
    else
    {
        i= arr[top];
        top--;
        cout<<"popped element="<<i<<"\n";
    }
    
}
void display()
{
    if (top == -1)
    {
        cout << "Stack underflow";
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i]<<"\n";
        }
    }
}
int main()
{ 
    int x,choice;
  do{  cout<<"Enter 1.Push \n 2.Pop \n 3.Display \n 4.Exit";
    cout<<"\nEnter your choice=";
    cin>>choice;
    switch (choice)
    {
    case 1:cout << "Push element =";
    cin >> x;
    push(x);
    break;
    case 2:cout << "popping\n";
    pop();
    cout << "Remaining Elements \n";
    display();
        break;
    case 3 :display();
    break;
    case 4:cout<<"Exit?";
    break;
    default:cout<<"Choose write option";
        break;
    }
  }
    while(choice!=4);
    


    return 0;
}
