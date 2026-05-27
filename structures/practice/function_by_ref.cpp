#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
    int marks;
};

void displayStudent(Student (&arr)[2], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "ID: " << arr[i].id << ", Name: " << arr[i].name << ", Marks: " << arr[i].marks << '\n';
    }
}

Student readStudent()
{
    Student s; // created student s
    cin >> s.id >> s.name >> s.marks;  // read inputs
    return s;  // return s 
}

int main()
{
    Student arr[2];
    int n = 2;

    // read n students
    for(int i = 0; i < n; i++){
        arr[i] = readStudent();
    }

    displayStudent(arr, n);
    

    return 0;
}