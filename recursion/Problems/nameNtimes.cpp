#include <iostream>
using namespace std;

void printName(int n){
    if(n==0){
        return ;
    }
    cout << "Sumit" << endl;
    printName(n-1);
}

int main(){

printName(5);
    return 0;
}