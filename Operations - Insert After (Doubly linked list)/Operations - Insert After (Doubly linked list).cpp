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

int main()
{
    node* head = nullptr;
    InsertAtBeginning(head, 10);
    InsertAtBeginning(head, 20);
    InsertAtBeginning(head, 30);
    InsertAtBeginning(head, 40);
    InsertAtBeginning(head, 50);
    
    cout << "Linked list contenet:" << endl;
    printList(head);

    node* n = find(head, 30);
    InsertAfter(n, 10000);

    cout << "\n\n Linked list contenet after inserting:" << endl;
    printList(head);


    system("pause>0");
    return 0;

}