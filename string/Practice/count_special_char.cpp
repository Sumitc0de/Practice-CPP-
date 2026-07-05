#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "sumit123@#$%!)vishwakarma(*&^%$#@!)";
    int count = 0;

    for(size_t i = 0;i<word.length();++i){
        if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z') 
        || (word[i] >= '0' && word[i] <= '9')){
            count++;
        }
    }
    int total = word.length() - count;
    cout << total;

    return 0;
}

