#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    int count = 0;

    while (!q.empty()) {
        if (q.front() % 2 == 0) {
            count++;
        }
        q.pop();
    }

    cout << "Even Count = " << count << endl;

    return 0;
}