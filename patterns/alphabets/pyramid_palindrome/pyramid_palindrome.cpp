#include <iostream>
using namespace std;

int main(){

    int n = 5; 
    int i,j;
    char ch = 'A';

    for(i = 1; i<=n ; i++){     
        for(j = 1; j<=n-i; j++){  
            cout << " ";
        }
        for(j = 1; j<=i; j++){   
                ch =  'A' + j- 1;
                cout << ch;
    
        }
        for(j = i-1; j>=1; j--){   
                ch =  'A' + j- 1;
                cout << ch;
    
        }

        cout << " "<<endl;
    } 

    return 0;
}