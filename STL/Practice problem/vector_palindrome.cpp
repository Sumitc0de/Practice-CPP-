#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n < 0) {
        return 0;
    }

    vector<int> v(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < n / 2; ++i) {  // diving the vector array anc checking for elemts left right 
        if (v[i] != v[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The vector is a palindrome.";
    } else {
        cout << "The vector is not a palindrome.";
    }

    return 0;
}