#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> mystack;

    mystack.push(10);
    mystack.push(20);
    mystack.push(30);
    mystack.push(40);
    mystack.push(50);

    cout << "Count = " << mystack.size() << endl;

    cout << "\nNumbers are:\n";
    while (!mystack.empty())
    {
        cout << mystack.top() << endl;
        mystack.pop();
    }

    system("pause>0");
    return 0;
}