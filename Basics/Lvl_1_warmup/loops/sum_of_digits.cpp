#include <iostream>
using namespace std;

int main(){
    int n = 123;
    int sum =0 ;
    while(n!=0){
        int digit = n%10; //getting last digit -> 3
        sum += digit;  // 0+3 -> 3            3+2->5     5+1->6
        n /= 10;
    }

    cout << sum;
    
    return 0;
}