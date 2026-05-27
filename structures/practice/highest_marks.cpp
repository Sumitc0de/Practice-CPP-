#include <iostream>
#include <string>
using namespace std;

struct Student{
    int id;
    string name;
    int marks;
};

int main(){

    Student arr[5];
    // read 5 students
    for(int i = 0; i<5; i++){
        cin >> arr[i].id >> arr[i].name >> arr[i].marks;
    }

    // print students
    for(int i = 0; i<5; i++){
        cout << "ID: " << arr[i].id << ", Name: " << arr[i].name << ", Marks: " << arr[i].marks << '\n';
    }
}