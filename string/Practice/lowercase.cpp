#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "SUMIT";

    for (size_t i = 0; i < name.length(); ++i)
    {
        if (name[i] > 'A' && name[i] < 'Z')
        {

            int num = int(name[i] + 32);
            cout << char(num);
        }
    }
    // cout << name;

    return 0;
}