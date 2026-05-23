#include <iostream>
using namespace std;

int main(){

    int n = 4; 
    int i,j;

    for(i = 1; i<=n ; i++){  // to print the number
        for(j = 1; j<=i; j++){   // to print the no. of times 
            cout <<i;
        }

        cout << " "<<endl;
    } 

    return 0;
}