#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main(){
    string name = "sumit";

    stack<char> st;
    // Use char for strings and reverse else use string
    // stack<char, vector<char>> st({'s','u','m','i','t'});

    // pushing each char to stack 
    for(char val:name){
        st.push(val);
    }
    
    string reverse = "";

    while (!st.empty())
    {
        reverse += st.top();
        st.pop();
    }
    


    cout << "Reverse String = "
         << reverse;



    return 0;
}