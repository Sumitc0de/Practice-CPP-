#include <iostream>
using namespace std;

int main(){

    int n = 121;

    // temp is used as the n -> values got update and become 0
    int temp = n;
    int rev = 0;

    while (n!=0)
    {
        int digit = n % 10;
        rev = rev*10 + digit;
        n /= 10;
    }

    if(temp == rev){
        cout << "Palindrome"<<endl;
    }else{
        cout << "Not Palindrome"<<endl;
    }
    
    return 0;
}