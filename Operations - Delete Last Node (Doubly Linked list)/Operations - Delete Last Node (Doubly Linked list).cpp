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

bool DeleteNode(node*& head, node* NodeToDelete)
{
    if (head == nullptr || NodeToDelete == nullptr)
        return false;

    if (head == NodeToDelete)
        head = NodeToDelete->next;

    if (NodeToDelete->next != nullptr)
        NodeToDelete->next->prev = NodeToDelete->prev;

    if (NodeToDelete->prev != nullptr)
        NodeToDelete->prev->next = NodeToDelete->next;

    delete NodeToDelete;
    return true;
}

bool DeleteFirstNode(node*& head)
{
    if (head == nullptr)
        return false;

    node* temp = head;
    head = head->next;

    if (head != nullptr)
        head->prev = nullptr;

    delete temp;
    return true;
}

bool DeleteLastNode(node*& head)
{
    if (head == nullptr)
        return false;

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return true;
    }

    node* h = head;
    // we need to find the node before last node
    while (h->next->next != nullptr)
    {
        h = h->next;
    }

    node* temp = h->next;
    h->next = nullptr;
    delete temp;
    return true;
}

int main()
{
    node* head = nullptr;
    InsertAtEnd(head, 100);
    InsertAtEnd(head, 200);
    InsertAtEnd(head, 300);
    printList(head);
    cout << endl;

    DeleteLastNode(head);

    printList(head);

    system("pause>0");
    return 0;

}