#include <iostream>
using namespace std;

int main() {
    int n = 6065;
    int revNum = 0;

    while (n > 0) {
        int ld = n % 10;
        revNum = revNum * 10 + ld;   // 65 * 10 + 6 => 6506
        n = n / 10;
    }

    cout << revNum;

    return 0;
}

// dry run 

// | n    | digit | reverse |
// | ---- | ----- | ------- |
// | 6065 | 5     | 5       |
// | 606  | 6     | 56      |
// | 60   | 0     | 560     |
// | 6    | 6     | 5606    |
