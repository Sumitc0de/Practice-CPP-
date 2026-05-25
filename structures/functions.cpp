#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
};

// Pass by value

// void display(Student s)
// {
//     cout << s.id << endl;
//     cout << s.name << endl;
// }

// Pass by referrence
void display(Student &s) // passing address of structure student s 
{
    cout << s.id << endl;
}

int main()
{
        Student s1 = {101, "Sumit"};

        display(s1);
    
    return 0;
}