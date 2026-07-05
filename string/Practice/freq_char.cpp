#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "Sumit Vishwakarma";
    char letter = 'i';
    int count = 0;

    for(size_t i = 0;i<word.length();++i){
        if(word[i] == letter){
            count++;
        }
    }



    cout << "Frequency of " << letter << " in " << word << " is " << count;

    return 0;
}