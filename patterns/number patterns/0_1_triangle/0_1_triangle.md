# Zero One Triangle

---

## 1. Pattern Title

Zero One Triangle

## 2. Difficulty Level

**Easy**

## 3. Problem Statement

Print a left aligned triangle of 1s and 0s where each value depends on the parity of i + j.

The current implementation uses:

```cpp
int n = 4;
```

## 4. Expected Output

```text
1
01
101
0101
```

## 5. Pattern Observation

If i + j is even, the program prints 1; otherwise it prints 0. This alternates values across rows and columns.

Key observations:

- The outer loop is responsible for row-by-row construction.
- Inner loops decide alignment, repeated cells, or visible values.
- The pattern belongs to the **Number Pattern** category.
- Main concepts: Nested Loops, Parity, Binary Pattern.

## 6. Logic Breakdown

- Initialize `n` and loop variables.
- Run the outer loop to visit each row.
- Use one or more inner loops to print spaces, stars, numbers, or alphabets.
- Print a newline after every row so the next row starts cleanly.
- When a counter, parity check, or reverse loop exists, it directly controls the visible sequence.

## 7. Formula Explanation

- `Outer loop controls rows.`
- `Inner loop controls columns printed in each row.`
- `The printed value is decided by the row, column, counter, or parity expression in the code.`

These formulas match the loop limits in the source code. The row index controls height, and the column loop controls how many symbols appear on each row.

## 8. Dry Run

For `n = 4`:

Row 1:
- Spaces = none
- Characters/Values = 1
- Output = `1`

Row 2:
- Spaces = none
- Characters/Values = 2
- Output = `01`

Row 3:
- Spaces = none
- Characters/Values = 3
- Output = `101`

Row 4:
- Spaces = none
- Characters/Values = 4
- Output = `0101`

## 9. Step-by-Step Algorithm

1. Start the program.
2. Set `n = 4`.
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

int main(){

    int n = 4; 
    int i,j;

    for(i = 1; i<=n ; i++){     // outer loop to print the row
        for(j = 1; j<=i; j++){   // inner loop to print the row element 
            if((i+j)%2 == 0){    // checking the remainder of sum of i+j 
            cout << "1";
            }
            else{
                cout << "0";
            }
        }

        cout << " "<<endl;
    } 

    return 0;
}
```

## 13. Key Learning Concepts

- Nested Loops
- Parity
- Binary Pattern
- Triangle

## 14. Similar Problems

- Floyd Triangle
- Repeated Number Triangle
- Reverse Increasing Number Triangle
- Increasing Number Triangle
- Number Palindromic Pyramid
- Repeated Number Triangle
- Right Aligned Number Triangle
- Number Diamond Pattern
- Repeated Row Number Square

## 15. Tags

- Nested Loops
- Parity
- Binary Pattern
- Triangle
