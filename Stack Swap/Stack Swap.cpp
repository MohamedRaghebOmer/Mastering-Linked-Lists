#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> mystack1;
    stack <int> mystack2;

    mystack1.push(10);
    mystack1.push(20);
    mystack1.push(30);
    mystack1.push(40);
    mystack1.push(50);

    mystack2.push(60);
    mystack2.push(70);
    mystack2.push(80);
    mystack2.push(90);
    mystack2.push(100);

    mystack1.swap(mystack2);

    cout << "mystack1 after swaping:\n";
    while (!mystack1.empty())
    {
        cout << mystack1.top() << endl;
        mystack1.pop();
    }

    
    cout << "\nmystack2 after swaping:\n";
    while (!mystack2.empty())
    {
        cout << mystack2.top() << endl;
        mystack2.pop();
    }

    return 0;
}