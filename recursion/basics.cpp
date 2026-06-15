#include <iostream>
using namespace std;


void fun(int n)
{
    // Base Case
    if(n == 0)
        return;

    // Work
    cout << n << " ";

    // Recursive Call
    fun(n - 1);
}

int main()
{
    fun(5);

    return 0;
}


// Dry run visualization for fun(5):
// fun(5)
//   prints 5
//   calls fun(4)
//     prints 4
//     calls fun(3)
//       prints 3
//       calls fun(2)
//         prints 2
//         calls fun(1)
//           prints 1
//           calls fun(0)
//             returns
// Output: 5 4 3 2 1 