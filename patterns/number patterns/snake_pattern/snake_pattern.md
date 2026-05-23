# Number Diamond Pattern

---

## 1. Pattern Title

Number Diamond Pattern

## 2. Difficulty Level

**Hard**

## 3. Problem Statement

Print a full number diamond by combining a palindromic number pyramid and its inverted lower half.

The current implementation uses:

```cpp
int n = 5;
```

## 4. Expected Output

```text
    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1
```

## 5. Pattern Observation

The upper loop prints rows 1 through n. The lower loop starts from n - 1 to avoid duplicating the middle row.

Key observations:

- The outer loop is responsible for row-by-row construction.
- Inner loops decide alignment, repeated cells, or visible values.
- The pattern belongs to the **Number Pattern** category.
- Main concepts: Nested Loops, Spaces, Palindrome.

## 6. Logic Breakdown

- Initialize `n` and loop variables.
- Run the outer loop to visit each row.
- Use one or more inner loops to print spaces, stars, numbers, or alphabets.
- Print a newline after every row so the next row starts cleanly.
- When a counter, parity check, or reverse loop exists, it directly controls the visible sequence.

## 7. Formula Explanation

- `Upper spaces = n - i`
- `Upper values = 1..i then i-1..1`
- `Lower spaces = n - i`
- `Lower values = 1..i then i-1..1`

These formulas match the loop limits in the source code. The row index controls height, and the column loop controls how many symbols appear on each row.

## 8. Dry Run

For `n = 5`:

Row 1:
- Spaces = 4
- Characters/Values = 1
- Output = `    1`

Row 2:
- Spaces = 3
- Characters/Values = 3
- Output = `   121`

Row 3:
- Spaces = 2
- Characters/Values = 5
- Output = `  12321`

Row 4:
- Spaces = 1
- Characters/Values = 7
- Output = ` 1234321`

Row 5:
- Spaces = 0
- Characters/Values = 9
- Output = `123454321`

Row 6:
- Spaces = 1
- Characters/Values = 7
- Output = ` 1234321`

Row 7:
- Spaces = 2
- Characters/Values = 5
- Output = `  12321`

Row 8:
- Spaces = 3
- Characters/Values = 3
- Output = `   121`

Row 9:
- Spaces = 4
- Characters/Values = 1
- Output = `    1`

## 9. Step-by-Step Algorithm

1. Start the program.
2. Set `n = 5`.
3. Run the outer loop for each row of the pattern.
4. Print required leading spaces if the implementation has an alignment loop.
5. Print the row content using stars, numbers, or alphabets as defined by the inner loop.
6. Apply any counter, ASCII conversion, parity check, palindrome, or boundary condition present in the code.
7. Move to the next line after the row is complete.
8. Stop when all rows have been printed.

## 10. Time Complexity

**O(n^2)**

The program uses nested loops. Across all rows, the number of printed cells grows proportional to the square of `n` for pattern-printing purposes.

## 11. Space Complexity

**O(1)**

Only a fixed number of variables are used. The printed output is not counted as auxiliary space.

## 12. Full C++ Code

```cpp
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
```

## 13. Key Learning Concepts

- Nested Loops
- Spaces
- Palindrome
- Diamond Pattern
- Symmetry

## 14. Similar Problems

- Zero One Triangle
- Floyd Triangle
- Repeated Number Triangle
- Reverse Increasing Number Triangle
- Increasing Number Triangle
- Number Palindromic Pyramid
- Repeated Number Triangle
- Right Aligned Number Triangle
- Repeated Row Number Square

## 15. Tags

- Nested Loops
- Spaces
- Palindrome
- Diamond Pattern
- Symmetry
