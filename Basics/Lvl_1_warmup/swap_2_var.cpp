#include <iostream>
using namespace std;

int main(){
    int a = 50, b = 26;
    
    cout << "Before Swap" <<endl;
    cout << a << " "<< b <<endl;
    
    // logic
    a = a + b; // 20+5 -> 25
    b = a - b; // 25-5 -> 20
    a = a - b; // 25-20 -> 5

    cout << "Before Swap"<<endl;
    cout << a << " " << b;
    
    return 0;
}