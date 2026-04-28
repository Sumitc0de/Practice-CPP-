#include <iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;

    //vowels -> a,e,i,o,u
   if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
    cout << "vowels"<<endl;
   }
   if(ch >='a' && ch <='z'){
    cout << "consonants";
   }
    return 0;
}