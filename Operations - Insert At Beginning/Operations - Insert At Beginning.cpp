#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};

void InsertAtBeginning(Node*& head, int value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

void PrintList(Node* head)
{
	while (head != nullptr)
	{
		cout << head->data << endl;
		head = head->next;
	}
}

int main()
{
	Node* head = nullptr;

	InsertAtBeginning(head, 100);
	InsertAtBeginning(head, 200);
	InsertAtBeginning(head, 300);

	PrintList(head);

	system("pause>0");
    return 0;
}