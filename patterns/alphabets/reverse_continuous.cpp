#include <iostream>
using namespace std;

int main(){

    int n = 5; 
    int i,j, count = 0;
    char ch = 'A';

    for(i = 1; i<=n ; i++){
        for(j = 1; j<=n-i; j++){   
                ch = 'A' + count;
                cout << ch;
                count++;
        }

        cout << " "<<endl;
    } 

    return 0;
}