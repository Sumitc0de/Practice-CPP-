#include <iostream>
using namespace std;
// typedef creates an alias (synonym) for a type.
// Here we define 'pointer' as an alias for 'int*' (pointer to int).
// After this, declaring 'pointer a' is equivalent to 'int* a'.
typedef int *pointer;

// not able to access student structure so we have to declare at global sccope
// void change(Student* s){

// }

struct Student
{
    int id;
    string name;
    int marks;
};

void change(Student *s)
{
    s->marks  = 500;
}

int main()
{
    int x = 10, y = 20;

    // int *a and int b
    // int* a = &x, b = &y; // This means that the a is initialised as pointer a but not b

    // Note: With the built-in declaration 'int* a = &x, b = &y;',
    // only 'a' would be a pointer and 'b' would be an int (not a pointer).
    // However, because we used a typedef alias 'pointer', both variables
    // declared with the alias are pointers:
    // 'pointer a = &x, b = &y;' makes both 'a' and 'b' of type 'int*'.

    // int *a and int *b
    // pointer a = &x, b = &y;

    // Print the pointer addresses stored in a and b
    // cout << a << endl
    //      << b;

    // struct Student
    // {
    //     int id;
    //     string name;
    //     int marks;
    // };

    Student s1 = {101, "Sumit", 900};
    Student s2 = {102, "Jay", 200};

    Student *a = &s1;
    Student *b = &s2;

    cout << a << endl; // pointer pointing to structure s1 address

    // Print the values
    cout << a->id << " " << (*a).marks << " " << a->name << endl;
    change(&s1);
    // Print the addresses
    cout << &a->id << " " << &(*a).marks << " " << &a->name <<endl;

    // after change 
    cout << a->id << " " << (*a).marks << " " << a->name << endl;
}