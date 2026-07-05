#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){

    stack<int, vector<int>> st({10, 20, 30, 40, 50});
    int target = 30;

    bool found = false;

    // Use temp to preserve the originnal stack as doing pop();
    stack<int, vector<int>> temp = st;
    while (!st.empty()) {
        if (st.top() == target) {
            found = true;
            break;
        }
        st.pop();
    }

    if (found)
        cout << target << " found in stack\n";
    else
        cout << target << " not found in stack\n";

    return 0;
}