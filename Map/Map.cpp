#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <string, int> studentGrads;

    studentGrads["Mohamed Ragheb"] = 100;
    studentGrads["Mohamed Rajab"] = 90;
    studentGrads["Abd-Elrhman Raja"] = 80;

    cout << "All students grades:" << endl;
    for (const auto& pair : studentGrads)
    {
        cout << "Student: \"" << pair.first << "\", Grade: " << pair.second
            << endl;
    }

    cout << "\n\nFinding [Mohamed Ragheb]'s grade in map:" << endl;
    string StudentName = "Mohamed Ragheb";
    if (studentGrads.find(StudentName) != studentGrads.end())
    {
        cout << StudentName << "'s grade: " << 
            studentGrads[StudentName] << endl;
    }
    else
    {
        cout << "Grade not found for " << StudentName << endl;
    }

    system("pause>0");
    return 0;
}
