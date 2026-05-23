#include <iostream>
using namespace std;

int main(){

    int n = 4;
    int i,j;
    // Simple Logic print diamond + inverted Diamond

    for(i = 1; i<=n; i++){
        for(j = 1; j<=n-i; j++){
            cout << " ";
        }
        for(j = 1; j<=2*i-1; j++){
            cout << "*";
        }
        cout <<endl;
    }
    
    for(i = 2; i <=n; i++){
        for(j = 1;j<=i-1;j++){    
            cout << " ";
        }
        for(j = 1; j<=2*(n-i)+1; j++){
            cout << "*";
        }
        cout <<endl;
    }

    return 0;
}