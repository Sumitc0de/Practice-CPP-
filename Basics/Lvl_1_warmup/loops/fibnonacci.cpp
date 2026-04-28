#include <iostream>
using namespace std;

int main(){
    int num = 3;
    int a = 0, b = 1, next;
    for(int i = 0;i<=num;i++){
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;   
    }
    return 0;
}

// dry run

// num = 3

// a = 0
// b = 1
// next = 1

// a = 1
// n = 1
// next = 2

// a = 1
// b = 2
// next = 3

// a = 2
// b = 3
// next = 5