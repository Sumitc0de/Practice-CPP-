#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    int maxElement = q.front();

    while (!q.empty())
    {
        if (q.front() > maxElement)
        {
            maxElement = q.front();
        }

        q.pop();
    }

    cout << "Maximum Element = " << maxElement;

    return 0;
}