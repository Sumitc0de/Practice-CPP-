#include <iostream>
using namespace std;

int main(){

    struct Address {
        string city;
        string state;
        int zip;
    };

    struct Student {
        int id;
        string name;
        Address addr;
        int marks;
    };

    struct Department {
        string name;
        Student topStudent;
    };

    struct University {
        string name;
        Department dept;
    };

    University uni;
    uni.name = "Global Tech University";
    uni.dept.name = "Computer Science";
    uni.dept.topStudent.id = 101;
    uni.dept.topStudent.name = "Sumit";
    uni.dept.topStudent.marks = 500;
    uni.dept.topStudent.addr.city = "Bengaluru";
    uni.dept.topStudent.addr.state = "Karnataka";
    uni.dept.topStudent.addr.zip = 560001;

    cout << "University: " << uni.name << "\n";
    cout << "Department: " << uni.dept.name << "\n";
    cout << "Top Student ID: " << uni.dept.topStudent.id << "\n";
    cout << "Top Student Name: " << uni.dept.topStudent.name << "\n";
    cout << "Top Student Marks: " << uni.dept.topStudent.marks << "\n";
    cout << "City: " << uni.dept.topStudent.addr.city << "\n";
    cout << "State: " << uni.dept.topStudent.addr.state << "\n";
    cout << "ZIP: " << uni.dept.topStudent.addr.zip << "\n";
    


    return 0;
}