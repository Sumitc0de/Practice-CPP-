#include <iostream>
using namespace std;

int main(){

    int n = 5; 
    int i,j;
    char ch = 'A';

    for(i = 1; i<=n ; i++){     // outer loop to print the row
        for(j = 1; j<=i; j++){   // inner loop to print the row element 
                ch =  'A' + j- 1;
                cout << ch;
        
        }

        cout << " "<<endl;
    } 

    return 0;
}