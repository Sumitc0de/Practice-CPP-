#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int i,j;

    for(i = 1; i<=n; i++){        // print right patter
        for(j = 1; j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
    

    for (i = 1; i<=n;i++ ){      // print inverted right pattern 
        for(j = 1; j<=n-i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}