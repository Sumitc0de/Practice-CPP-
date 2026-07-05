#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "madam";
    size_t left = 0;
    size_t right = word.length() - 1;

    // cout << left << right ;

    while(left < right){
        char temp = word[left];
        word[left] = word[right];
        word[right] = temp;
        left++;
        right--;
    }
    cout << word;


    return 0;
}