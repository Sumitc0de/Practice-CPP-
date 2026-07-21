#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Simple implementation of Bubble Sort
// This function sorts the input vector in non-decreasing order
// by repeatedly swapping adjacent out-of-order elements.
void bubbleSort(vector<int>& arr){
    int n = arr.size(); // number of elements

    // Outer loop reduces the range of comparison after each pass
    // i goes from n-1 down to 0 representing the last index to check

    for(int i = n-1 ; i >= 0; i--){
        // Inner loop bubbles the largest element in arr[0..i] to position i
        bool swapped = false;
        for(int j = 0; j < i; j++){
            // If current element is greater than the next, swap them
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true; 
            }
        }
          if(!swapped)
            break;
    }
}

int main(){
    // Example input array
    vector<int> v = {1, 14, 5, 2, 0, 6, 4, 8, 2};

    // Sort the vector using bubble sort
    bubbleSort(v);

    // Print the sorted result
    for(int val : v){
        cout << val << " ";
    }
    cout << '\n';
    return 0;
}