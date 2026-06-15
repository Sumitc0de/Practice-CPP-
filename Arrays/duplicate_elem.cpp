#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 6, 8, 1, 37, 5, 5, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate Elements and Their Counts:\n";

    for(int i = 0; i < size; i++) {
        int count = 1;
        bool alreadyCounted = false;

        // Check if current element was already processed
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                alreadyCounted = true;
                break;
            }
        }

        if(alreadyCounted) {
            continue;
        }

        // Count occurrences
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        // Print only duplicates
        if(count > 1) {
            cout << arr[i] << " -> " << count << " times" << endl;
        }
    }

    return 0;
}