#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "sumit";

    size_t left = 0;
    size_t right = word.length();
    if(right == 0){
        cout << "Palindrome";
        return 0;
    }
    right--; // index of last character

    bool is_pal = true;
    while(left < right){
        if(word[left] != word[right]){ is_pal = false; break; }
        left++;
        right--;
    }

    cout << (is_pal ? "Palindrome" : "Not palindrome");


    return 0;
}