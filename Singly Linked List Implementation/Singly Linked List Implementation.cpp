#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
};

int main()
{
	Node* Node1 = nullptr;
	Node* Node2 = nullptr;
	Node* Node3 = nullptr;
	
	Node1 = new Node;
	Node2 = new Node;
	Node3 = new Node;

	Node1->data = 10;
	Node2->data = 20;
	Node3->data = 30;

	Node1->next = Node2;
	Node2->next = Node3;
	Node3->next = nullptr;

	Node* head = Node1;

	while (head != nullptr)
	{
		cout << head->data << endl;
		head = head->next;
	}

	system("pause>0");
	return 0;
}
