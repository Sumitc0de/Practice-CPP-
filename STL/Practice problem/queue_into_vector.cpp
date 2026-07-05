#include <iostream>
#include <queue>
#include <deque>
#include <vector>
using namespace std;

int main(){

    queue<int, deque<int>> q(deque<int>{1,2,3,4,5});
    vector<int> v;

    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    
    

    return 0;
}