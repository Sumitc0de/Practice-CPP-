#include <iostream>
using namespace std;

int main() {
    int n = 6065;
    int count = 0;

    while (n > 0) {
        count++;
        n /= 10;
    }

    cout << count;

    return 0;
}