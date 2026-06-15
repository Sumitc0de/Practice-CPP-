#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // Insert elements at the back of the queue
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    // Remove one element from the front
    q.pop();

    cout << "After pop:" << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    // Print and remove all elements
    cout << "Queue elements from front to back:" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;
    cout << "Queue empty: " << boolalpha << q.empty() << endl;

    return 0;
}
