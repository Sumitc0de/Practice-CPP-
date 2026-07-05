#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "Sumit vishwakarma sdf sad asd asd asd asd";
    int spaceCount = 0 ;
    
    for(size_t i = 0; i < word.length(); ++i){
        if(word[i] == ' '){
            spaceCount++;
        }
    }

    int wordCount = spaceCount + 1;
    cout << "Word count: "<< wordCount << endl;
    cout << "Space count: "<< spaceCount;

    return 0;

}