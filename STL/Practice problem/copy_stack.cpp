#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){

    stack<int, vector<int>> st1({10,20,30,40,50});

    stack<int> st2, temp;


    // Step 1: Move all elements st1 -> temp
    while(!st1.empty())
    {
        temp.push(st1.top());
        st1.pop();
    }


    // Step 2: Move all elements temp -> st2
    while(!temp.empty())
    {
        st2.push(temp.top());
        temp.pop();
    }


    // Print copied stack
    while(!st2.empty())
    {
        cout << st2.top() << endl;
        st2.pop();
    }


    return 0;
}