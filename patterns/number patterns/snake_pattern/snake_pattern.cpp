#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++) // to add space 
        {
            cout << " ";
        }
        for (j = 1; j <=i; j++)     // increasing till the row number like row 2 so increase number till 2
        {
            cout << j;
        }
        
        for (j = i-1; j >=1; j--)  // decrease from row number like row 2 so decrese like 2....1
        {
            cout << j;
        }
        cout << endl;
    }
    for(i = n-1; i>=1; i--){
        
       for (j = 1; j <= n - i; j++) // to add space 
        {
            cout << " ";
        }
        for (j = 1; j <=i; j++)     // increasing till the row number like row 2 so increase number till 2
        {
            cout << j;
        }
        
        for (j = i-1; j >=1; j--)  // decrease from row number like row 2 so decrese like 2....1
        {
            cout << j;
        }
        cout << endl;
     
    }

    return 0;
}
