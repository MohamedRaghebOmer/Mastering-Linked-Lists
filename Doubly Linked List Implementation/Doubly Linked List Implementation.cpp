#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node* prev;
};

void printList(node* head)
{
    cout << "NULL <=> ";
    while (head != nullptr)
    {
        cout << head->data << " <=> ";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    node* node1 = nullptr;
    node* node2 = nullptr;
    node* node3 = nullptr;

    node1 = new node;
    node2 = new node;
    node3 = new node;

    node1->data = 10;
    node1->prev = nullptr;
    node1->next = node2;

    node2->data = 20;
    node2->prev = node1;
    node2->next = node3;

    node3->data = 30;
    node3->prev = node2;
    node3->next = nullptr;

    node* head = node1;
    printList(head);

    system("pause>0");
    return 0;
}