#include <iostream>
#include <conio.h>

using namespace std;
#define size 5
int arr[size];
int Top = -1;  //For first value
int rear = -1; //for last;
void enqueue()
{
    int val;
    cout << "Enter the value";
    cin >> val;
    if ((rear == (size - 1)) && (Top == 0) || (rear == (Top - 1)))
    {
        cout << "Full!!!";
    }
    if (Top == -1 && rear == -1) //insertion of first value
        Top = rear = 0;

    else if (rear == (size - 1)) //when reaches the end of the circular queue
        rear = 0;

    else
        rear++;

    arr[rear] = val;
}
void dequeue()
{
    int rem = 0;
    if (Top == -1 && rear == -1)
    {
        cout << "Underflow!!!";
    }
    rem = arr[Top];
    if ((Top == 0 && rear == 0) || (Top == (size - 1) && rear == (size - 1))) //for single element
        Top = rear = -1;

    if (Top == (size - 1))
        Top = 0;
    else
    {
        Top++;

        cout << "The dequeued element:" << rem;
    }
}

void display()
{
    if (Top == -1 && rear == -1) //if queue is empty
    {
        cout << " EMPTY!!!";
        return;
    }

    if (Top <= rear)
    {
        for (int i = Top; i <= rear; i++)
            cout << arr[i] << "\n";
    }

    else if (Top >= rear)
    {
        int i = Top;
        while (i <= (size - 1))
        {
            cout << arr[i] << "\n";
            i++;
        }
        i = 0;
        while (i <= rear)
        {
            cout << arr[i] << "\n";
            i++;
        }
    }
}
int main()

{
    int c;
    cout << "***** Array Implementation of circular queue Menu Driven program ***** \n";
    cout << "Press 1.enqueue   2.dequeue   3.display   4.exit ";
    while (1)
    {
        cout << "\nEnter your choice:";
        cin >> c;
        switch (c)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Wrong choice!!!";
        }
    }

    return 0;
}