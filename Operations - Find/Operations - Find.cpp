#include <iostream>
using namespace std;

class node 
{
public:
    int value;
    node* next;
};

void InsertAtBeginning(node*& head, int value)
{
    node* newNode = new node;
    newNode->value = value;
    newNode->next = head;
    head = newNode;
}

void PrintList(node* head)
{
    while (head->next != nullptr)
    {
        cout << head->value << endl;
        head = head->next;
    }
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

    InsertAtBeginning(head, 10);
    InsertAtBeginning(head, 20);
    InsertAtBeginning(head, 30);
    InsertAtBeginning(head, 40);
    InsertAtBeginning(head, 50);

    PrintList(head);

    node* finded = find(head, 10);

    if (finded != nullptr)
        cout << "Value Finded :-)" << endl;
    else
        cout << "Value NOT Found :-(" << endl;

    system("pause>0");
    return 0;
}