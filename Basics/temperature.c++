#include <iostream>
using namespace std;

int main(){
    int celsius,fahrenheit;

    cout<<"Enter the celsius temperature"<<endl;
    cin>>celsius;

    fahrenheit = (celsius * (9/5)) + 32;

    cout<<"fahrenheit temperature: "<<fahrenheit;

    return 0;
}