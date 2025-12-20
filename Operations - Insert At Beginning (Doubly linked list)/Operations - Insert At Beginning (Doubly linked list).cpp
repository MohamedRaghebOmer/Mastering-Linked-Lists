#include <iostream>
using namespace std;

class node
{
public:
    int value;
    node* next;
    node* prev;
};

void InsertAtBeginning(node*& head, int value)
{
    node* newNode = new node;
    newNode->value = value;
    newNode->next = head;
    newNode->prev = nullptr;

    if (head != nullptr)
        head->prev = newNode;

    head = newNode;
}

void printList(node* head)
{
    cout << "NULL <=> ";
    while (head != nullptr)
    {
        cout << head->value << " <=> ";
        head = head->next;
    } 
    cout << "NULL";
}

int main()
{
    node* head = nullptr;

    InsertAtBeginning(head, 100);
    InsertAtBeginning(head, 200);
    InsertAtBeginning(head, 300);
    InsertAtBeginning(head, 400);
    
    printList(head);

    system("pause>0");
    return 0;

}