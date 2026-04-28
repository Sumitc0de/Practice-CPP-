#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 0; i<n; i++){                        // outer loop -> runs to print rows (1 to N)
        for(int j = 0; j<n-i; j++){                  // inner loop -> runs to print the star for each row (1 to N-1)
             cout << "*";
        }
        cout << "\n";        // print new line after each row complete 
    }

    return 0;
}