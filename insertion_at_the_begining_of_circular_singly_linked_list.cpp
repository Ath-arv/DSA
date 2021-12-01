#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *link;

} * head; // pointer to first node
void print(struct Node *head)
{
    struct Node *temp = head;

    do
    {
        cout << temp->data << "==>";
        temp = temp->link;

    } while (temp != head); // using do while because initially temp=head so while will not work.
}
struct Node *insertbeg(struct Node *head, int data)
{
    struct Node *ptr = (Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;   //p pointer for traversal
    while (p->link != head)
    {
        p = p->link;
    } 
    //we are at last node
                             
    p->link = ptr;
    ptr->link = head;
    head = ptr;
    return head;
}
int main()
{
    struct Node *n1, *n2, *n3, *n4, *n5;
    n1 = (Node *)malloc(sizeof(struct Node));
    n1->data = 5;
    n1->link = NULL;
    head = n1;

    n2 = (Node *)malloc(sizeof(struct Node));
    n2->data = 4;
    n2->link = NULL;
    n1->link = n2;

    n3 = (Node *)malloc(sizeof(struct Node));
    n3->data = 3;
    n3->link = NULL;
    n2->link = n3;

    n4 = (Node *)malloc(sizeof(struct Node));
    n4->data = 2;
    n4->link = NULL;
    n3->link = n4;

    n5 = (Node *)malloc(sizeof(struct Node));
    n5->data = 1;
    n5->link = head;
    n4->link = n5; // Address to first node is given to the last node.
    cout << "the existing linked list";

    cout << "\n ";
    cout << "Before insertion";
    print(head);
    // printing
    head=insertbeg(head, 56);
    cout << "After insertion";
    print(head);
    return 0;
}
