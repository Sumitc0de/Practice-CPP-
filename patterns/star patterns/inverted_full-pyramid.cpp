#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int i,j;
    for(i = 1; i<=n; i++){
        for(j = 1;j<=i-1;j++){
            cout <<" ";
        }
        for(j =1 ; j<=(2*(n-i)+1); j++){
            cout << "*";
        }
        cout << "\n"; 
    }
    return 0;
}