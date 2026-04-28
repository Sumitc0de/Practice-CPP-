#include <iostream>
using namespace std;

int main(){
    int year = 2006;

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << "is a leap year";
    }else{
        cout << "Not leap year";
    }

    return 0;
}