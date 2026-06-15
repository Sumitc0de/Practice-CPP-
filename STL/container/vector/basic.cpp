#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>::iterator it;

    // Initialize vector with inital 0
    vector<int> v;

    // vector of size 3
    vector<int> v1(3);

    // vector of size 5 and value 10
    vector<int> v2(3, 10);

    // to add elements
    v.push_back(1); // here the size is 1 but capacity 2
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // to pop element
    // v.pop_back();

    // cout << v.size() <<endl;
    // cout << v.capacity() <<endl;

    // Element accessig using at() or []
    // cout << v.at(1) << endl;
    // cout << v[1] << endl;

    // front and back element access
    // cout << v.front() << endl; // 1
    // cout << v.back() << endl; // 3

    // v.erase(v.begin());     // only size changed not capacity
    // v.erase(v.begin()+3);

    // v.insert(v.begin() + 1, 100);   // it place elem 100 at place index 1

    // v.clear(); // to clear the size

    // To check vector empty
    // v.empty();

    // Vector Iterators
    // begin, end, rbegin, rend
    


    // Range based loop
    // for (int val : v)
    // {
    //     cout << val << " ";
    // }

    // Simple for loop
    // for(int i =0;i<v.size();i++){
    //     cout <<v[i]<<" ";
    // }

    // Iterator traversing
    // Forward
    //     for(auto it=v.begin();it!=v.end();it++)
    // {
    //     cout<<*(it)<<" ";
    // }

    // Backward
    //     for(auto it=v.rbegin();it!=v.rend();it++)
    // {
    //     cout<<*(it)<<" ";
    // }


    for(it = v.begin(); it!= v.end();it++){
        cout<<*(it)<<" ";   
    }


    return 0;
}