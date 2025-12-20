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
    while (head != nullptr)
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
        {
            return head;
        }

        head = head->next;
    }

    return nullptr;
}

bool InsertAfter(node* previous, int valueToInsert)
{
    if (previous == nullptr)
        return false;

    node* newNode = new node;
    newNode->value = valueToInsert;
    newNode->next = previous->next;
    previous->next = newNode;

    return true;

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
    cout << endl;

    node* n = find(head, 50);

    if (InsertAfter(n, 500))
        PrintList(head);
    else
        cout << "previous not found, or can't be nullptr" << endl;


    system("pause>0");
    return 0;
}