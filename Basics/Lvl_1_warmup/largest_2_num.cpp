#include <iostream>
using namespace std;

int main(){
    
    long n1 = 20, n2 = 65; 
    
    if(n1>n2){
        cout << "Largest number: " << n1 <<endl;
    }else if(n2>n1){
        cout << "Largest number: " << n2 <<endl;
    }else{
        cout << "Both are equal" ;
    }
    return 0;
}