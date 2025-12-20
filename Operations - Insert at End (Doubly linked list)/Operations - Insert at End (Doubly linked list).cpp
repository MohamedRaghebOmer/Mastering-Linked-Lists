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

void InsertAfter(node*& prev, int value)
{
    if (prev == nullptr)
        return;

    node* newNode = new node;
    newNode->value = value;
    newNode->next = prev->next;
    newNode->prev = prev;

    if (prev->next != nullptr)
        prev->next->prev = newNode;

    prev->next = newNode;
}

void InsertAtEnd(node*& head, int value)
{
    node* newNode = new node;
    newNode->value = value;
    newNode->next = nullptr;

    // if the list is empty
    if (head == nullptr)
    {
        newNode->prev = nullptr;
        head = newNode;
        return;
    }

    node* h = head;
    while (h->next != nullptr)
    {
        h = h->next;
    }

    newNode->prev = h;
    h->next = newNode;
}

int main()
{
    node* head = nullptr;
    InsertAtEnd(head, 100);
    InsertAtEnd(head, 200);
    InsertAtEnd(head, 300);
    InsertAtEnd(head, 400);
    InsertAtEnd(head, 500);
    printList(head); // print:  NULL <=> 100 <=> 200 <=> 300 <=> 400 <=> 500 <=> NULL

    system("pause>0");
    return 0;

}