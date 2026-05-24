#include <iostream>
using namespace std;

int main(){

    // integer variable storing a value
    int a = 25;

    // pointer variable storing the address of 'a'
    int *ptr = &a;

    // print the value of 'a'
    cout << a << endl;

    // print the address stored in 'ptr' (address of 'a')
    cout << ptr << endl;

    // print the address of the pointer variable itself
    cout << &ptr << endl;

    // print the value pointed to by 'ptr' (dereference the pointer)
    cout << *ptr << endl;

    // datatype *pointer_name 
    // float *ptr;
    // char *ptr;

    return 0;
}