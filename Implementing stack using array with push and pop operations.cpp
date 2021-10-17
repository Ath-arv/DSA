#include <iostream>
using namespace std;

int arr[5];

int top = -1;
void push(int x)
{
    if (top >= 4)
    {
        cout << "stack overflow";
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
        cout << "No element is stack";
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
    int x;

    cout << "Push element =";
    cin >> x;
    push(x);
    cout << "Push element=";
    cin >> x;
    push(x);
    cout << "Push element=";
    cin >> x;
    push(x);
     cout << "Push element =";
    cin >> x;
    push(x);
    cout << "Push element=";
    cin >> x;
    push(x);
    display();
    cout << "popping\n";
    pop();
    cout << "remaining \n";
    display();
    return 0;
}
