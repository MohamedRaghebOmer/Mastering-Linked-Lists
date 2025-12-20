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

void InsertAtEnd(node*& head, int valueToInsert)
{
    node* newNode = new node;

    newNode->value = valueToInsert;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    node* lastNode = head;
    while (lastNode->next != nullptr)
    {
        lastNode = lastNode->next;
    }

    lastNode->next = newNode;
}

bool DeleteNode(node*& head, int value)
{
    if (head == nullptr)
        return false;

    if (head->value == value)
    {
        node* temp = head;  // احفظ المؤشر للعقدة اللي هتمسح
        head = head->next;   // حدث head ليشير على العنصر التالي
        delete temp;         // امسح العنصر القديم بأمان
    }

    node* previousNode = new node;
    node* CurrentNode = head;

    while (CurrentNode != nullptr && CurrentNode->value != value)
    {
        previousNode = CurrentNode;
        CurrentNode = CurrentNode->next;
    }

    if (CurrentNode == nullptr)
        return false;

    previousNode->next = CurrentNode->next;
    delete CurrentNode;
    return true;
}

bool DeleteFirstNode(node*& head)
{
    node* current = head;

    if (head == nullptr)
        return false;

    head = current->next;
    delete current;
    return true;
}

bool DeleteLastNode(node*& head)
{
    if (head == nullptr)
        return false;

    node* prev = head;
    node* current = head;

    while (current->next != nullptr)
    {
        prev = current;
        current = current->next;
    }

    prev->next = nullptr;
    delete current;
    return true;
}


// This function created by Chat-GPT. I didn't take it as a lesson, and i didn't create it
void DeleteList(node*& head)
{
    while (head != nullptr)
    {
        node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    node* head = nullptr;

    InsertAtEnd(head, 10);
    InsertAtEnd(head, 20);
    InsertAtEnd(head, 30);

    PrintList(head);
    cout << endl;

    if (DeleteLastNode(head))
        cout << "Deleted successfully" << endl;
    else
        cout << "Value not found" << endl;

    PrintList(head);


    DeleteList(head);
    system("pause>0");
    return 0;
}