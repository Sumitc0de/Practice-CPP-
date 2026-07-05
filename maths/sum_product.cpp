#include <iostream>
using namespace std;

int main(){
    int n = 65;
    int sum = 0;
    int product = 1;

    while(n>0){
        int ld = n % 10;
        sum += ld;
        product *= ld;
        n = n / 10;
    }

    cout << sum << endl << product;
    return 0;
}