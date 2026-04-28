#include <iostream>
using namespace std;

int main(){
    int num = 25;

    if((num%5 == 0) && (num%11 == 0)){
        cout << "The number is divisible by both 11 and 5";
    }else{
        cout << "The number is not divisible by 11 and 5";
    }


    return 0;
}