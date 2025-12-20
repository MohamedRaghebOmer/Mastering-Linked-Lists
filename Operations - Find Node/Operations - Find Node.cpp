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

node* find(node* head, int value)
{
    while (head != nullptr)
    {
        if (head->value == value)
            return head;

        head = head->next;
    }

    return nullptr;
}

int main()
{
    node* head = nullptr;

    InsertAtBeginning(head, 100);
    InsertAtBeginning(head, 200);
    InsertAtBeginning(head, 300);
    InsertAtBeginning(head, 400);

    printList(head);
    cout << endl << endl;

    node* value = find(head, 300);

    if (value != nullptr)
        cout << "Value is found => " << value->value << endl;
    else
        cout << "value not found" << endl;

    system("pause>0");
    return 0;

}