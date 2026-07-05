#include <iostream>
using namespace std;

int main() {
    int n = 1635;
    int dup = n;
    int sum = 0;

    while (n) {
        int ld = n % 10;
        sum += ld * ld * ld;
        n = n / 10;
    }

    if(dup == sum) cout << "armstrong";
    else cout << "not";


    return 0;
}

