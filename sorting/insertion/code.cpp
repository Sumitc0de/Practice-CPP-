#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Simple insertion sort implementation that sorts the vector in-place
void insertionSort(vector<int>& arr){
    // number of elements in the array
    int n = arr.size();

    // i is the index of the element currently being inserted
    // j is used to scan the sorted portion to the left of i
    int i, j;
    for(i = 0; i < n; i++){
       // current holds the value to insert into the sorted left side
       int current = arr[i];
       // start comparing with the element just before i
       j = i - 1;

       // shift elements of the sorted segment [0..i-1] that are greater
       // than current one position to the right to make space
       while(j >= 0 && arr[j] > current){
           arr[j+1] = arr[j];
           j--;
       }

       // place current into its correct sorted position
       arr[j+1] = current;

    }
}

int main(){

    // sample input vector to sort
    vector<int> v = {1, 14, 5, 2, 0, 6, 4, 8, 2};

    // sort the vector using insertion sort
    insertionSort(v);

    // print the sorted array to stdout
    for(int val : v){
        cout << val << " ";
    }
    cout << '\n';
}