#include <iostream>

#include <unordered_map>
using namespace std;

int main(){

    int arr[] = {4, 1, 2, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int,int> mp;

    for(int x:arr){
        mp[arr[x]]++;
    }

    int maxFreq = 0;
    int answer = -1;

    for(auto it: mp){
        if(it.second > maxFreq){
            maxFreq = it.second;
            answer = it.first;
        }
    }

    cout << "Highest occurring element = " << answer << endl;
    cout << "Frequency = " << maxFreq << endl;

    return 0;
}