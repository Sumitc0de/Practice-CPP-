#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "education";
    int count = 0;

    for(int i =0; i<word.length();++i){
        if(word[i] == 'a' ||
           word[i] == 'e' ||
           word[i] == 'i' ||
           word[i] == 'o' ||
           word[i] == 'u'){
            count++;
        }
    }

    cout << "Count :" << count;

    return 0;
}