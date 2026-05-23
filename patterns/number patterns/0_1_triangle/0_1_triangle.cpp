#include <iostream>
using namespace std;

int main(){

    int n = 4; 
    int i,j;

    for(i = 1; i<=n ; i++){     // outer loop to print the row
        for(j = 1; j<=i; j++){   // inner loop to print the row element 
            if((i+j)%2 == 0){    // checking the remainder of sum of i+j 
            cout << "1";
            }
            else{
                cout << "0";
            }
        }

        cout << " "<<endl;
    } 

    return 0;
}