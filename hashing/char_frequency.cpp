#include <iostream>
#include <map>
using namespace std;

int main(){

    // array
    int arr[] = {5, 2, 5, 3, 2, 5};

    // precomputing hashing
    map<int, int> mp;

    for (int x : arr)
    {
        mp[x]++;
    }

    for (auto it : mp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}