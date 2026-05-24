#include <iostream>
using namespace std;

int main()
{

    // Memory created during runtime.

    int *p = new int; // creating a new memory address of type integer

    *p = 10; // storinf the value 10 to the adderess

    cout << *p; // print the value stores

    delete p; // delete the adderess

    // 1️⃣ What is dangling pointer?
    int *ptr = new int;

    delete ptr;

    *ptr = 5;


    // 2️⃣ What is wild pointer?
    // int *p;     // uninitialized pointer

    // 3️⃣ What is void pointer?
    // void *p;   // generic piinter pointing to any data type  

    return 0;
}