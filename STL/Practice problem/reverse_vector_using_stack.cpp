#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    vector<int> v = {10,20,30,40,50};
    stack<int> st;

    // push all elements onto the stack without modifying the vector while iterating
    for(size_t i = 0; i < v.size(); ++i){
        st.push(v[i]);
    }

    // clear the vector to prepare for reversed elements
    v.clear();
    
    


    while(!st.empty()){
        // cout << st.top() << endl;
        v.push_back(st.top());
        st.pop();
    }
    
    // cout << st.top();
    for(int val:v){
        cout << val << " ";
    }

    return 0;
}