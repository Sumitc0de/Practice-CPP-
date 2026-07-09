#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int i, j;
    // char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        // starting character
        char start = 'A' + (n - i);

        // print from start -> 'A'+n-1
        for (char ch = start; ch <= 'A' + n - 1; ch++)
        {
            cout << ch;
        }

        cout << endl;
    }
    return 0;
}