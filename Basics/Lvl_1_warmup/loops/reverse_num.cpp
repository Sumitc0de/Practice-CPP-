#include <iostream>
using namespace std;

int main(){
    int num = 23;
    int rev = 0;

    while(num!=0){
        int digit = num % 10;  // get last digit
        rev = rev*10 + digit;  // build reverse
        num = num / 10;   // remove last digit
    }

    cout << rev;

    return 0;
}
