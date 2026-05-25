#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
} s2;


// declaration using typedef
// Nested structure
typedef struct TopperStudent
{
    Student s;
    int marks;
} Topper;


int main()
{
    struct Student s1 = {101, "Sumit"};
    Topper s3; //  initialisation

    s3.s.id = 103;
    s3.s.name = "Jayprakash";
    s3.marks = 500;

    s2.id = 102;
    s2.name = "Hemant";

    cout << s1.id << endl;
    cout << s1.name << endl;

    cout << s2.id << endl;
    cout << s2.name << endl;

    cout << s3.s.id << endl;
    cout << s3.s.name << endl;
    cout << s3.marks << endl;

    // Array structures handling

    Student arr[3];

    arr[0].id = 1;
    arr[0].name = "A";

    arr[1].id = 2;
    arr[1].name = "B";

    arr[2].id = 3;
    arr[2].name = "C";


}