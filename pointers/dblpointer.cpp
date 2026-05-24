#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int *p = &a; // stores the address of variable a
    int **pp = &p; // stores the address of pointer p

    // Visualisation
    // pp -> p -> a -> 10

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p (address of a): " << p << endl;
    cout << "Value pointed by p (*p): " << *p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Value of pp (address of p): " << pp << endl;
    cout << "Value pointed by pp (*pp): " << *pp << endl;
    cout << "Value pointed twice by pp (**pp): " << **pp << endl;

    return 0;
}