#include <iostream>
using namespace std;

// pass by value 
void change(int x){
    x = 20;
}

void changeByPtr(int *ptr){
    *ptr = 30;
}


int main(){

    int a = 10;

    cout << "function pass by value"<<endl;
    // Before change
    cout << a <<endl;
    change(a);
    
    // after change print sames value of a 
    cout << a <<endl;
    
    int b = 10;
    
    cout << "function pass by pointer"<<endl;
    cout << b <<endl;
    changeByPtr(&b);   // passing the address of the variable b which contains value 10
    cout << b <<endl;


    return 0;
}