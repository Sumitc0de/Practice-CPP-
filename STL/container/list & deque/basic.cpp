#include <algorithm>
#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main() {
    list<int> numbers = {10, 20, 30, 40};

    numbers.push_front(5);
    numbers.push_back(50);

    cout << "list contents:";
    for (int value : numbers) {
        cout << ' ' << value;
    }
    cout << '\n';

    numbers.remove(30);

    auto it = find(numbers.begin(), numbers.end(), 20);
    if (it != numbers.end()) {
        numbers.insert(next(it), 25);
    }

    cout << "after modifications:";
    for (int value : numbers) {
        cout << ' ' << value;
    }
    cout << '\n';

    cout << "size = " << numbers.size() << '\n';
    cout << "front = " << numbers.front() << ", back = " << numbers.back() << '\n';

    numbers.reverse();
    cout << "reversed:";
    for (int value : numbers) {
        cout << ' ' << value;
    }
    cout << '\n';

    // Random access to element possible but not in list 
    deque<int> dq = {100, 200, 300};
    dq.push_front(50);
    dq.push_back(350);

    cout << "deque contents:";
    for (int value : dq) {
        cout << ' ' << value;
    }
    cout << '\n';

    dq.pop_front();
    dq.pop_back();
    dq.push_back(400);

    cout << "after deque modifications:";
    for (int value : dq) {
        cout << ' ' << value;
    }
    cout << '\n';
    cout << "deque size = " << dq.size()
         << ", front = " << dq.front()
         << ", back = " << dq.back() << '\n';

    return 0;
}
