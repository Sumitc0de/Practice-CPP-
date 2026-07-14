#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Implements in-place selection sort on a vector of integers.
// Time complexity: O(n^2), Space complexity: O(1).
void selectionSort(vector<int>& arr){
    int n  = arr.size();

    // Move the boundary of the unsorted subarray one by one
    for(int i=0;i<n-1;i++){
        // Assume the current position i is the minimum
        int minIndex = i;
        // Find the actual minimum element in the remaining unsorted part
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j; // update index of minimum element
            }
        }
        // Place the found minimum at position i
        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    // Sample input vector to demonstrate selection sort
    vector<int> v ={1,14,5,2,0,6,4,8,2};

    selectionSort(v); // sort the vector in ascending order

    // Print sorted array
    for(int val:v){
        cout << val << " ";
    }
    cout << '\n';
    return 0;
}