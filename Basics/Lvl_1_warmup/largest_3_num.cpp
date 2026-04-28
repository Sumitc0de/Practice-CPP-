#include <iostream>
using namespace std;

int main() {
    long n1 = 20, n2 = 65, n3 = 12;

    if (n1 >= n2 && n1 >= n3) {
        cout << "Largest number: " << n1 << endl;
    } 
    else if (n2 >= n1 && n2 >= n3) {
        cout << "Largest number: " << n2 << endl;
    } 
    else {
        cout << "Largest number: " << n3 << endl;
    }

    return 0;
}