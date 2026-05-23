#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int i,j;
    for(i = 1; i<=n; i++){                        // outer loop -> runs to print rows
        for(j = 1; j<=n-i; j++){                  // inner loop -> runs to print the space for each row
            cout << " ";
        }
        for(j =1 ; j<i; j++){
            cout << "*";    
        }
        cout << "\n";        // print new line after each row complete 
    }

    return 0;
}