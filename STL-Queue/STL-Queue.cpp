#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> myqueu;

    myqueu.push(10);
    myqueu.push(20);
    myqueu.push(30);
    myqueu.push(40);
    myqueu.push(50);

    while (!myqueu.empty())
    {
        cout << myqueu.front() << endl;
        myqueu.pop();
    }

    return 0;
}