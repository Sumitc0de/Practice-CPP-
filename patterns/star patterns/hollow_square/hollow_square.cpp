#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int i,j;

    for (i=1; i<=n; i++)
    {
        // Print stars for each solid rows
        if (i==1 || i==n)
            for (j=1; j<=n; j++)
                cout << "*";

        // stars for hollow rows
        else
            for (j=1; j<=n; j++)
                if (j==1 || j==n)
                    cout << "*";
                else
                    cout << " ";

        // Move to the next line/row
        cout << "\n";
    }

    return 0;
}