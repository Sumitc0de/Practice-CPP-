#include <iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 0; i<n; i++){                        // outer loop -> runs to print rows
        for(int j = 0; j<i+1; j++){                  // inner loop -> runs to print the star for each row
            cout << "*";
        }
        cout << "\n";        // print new line after each row complete 
    }

    return 0;
}