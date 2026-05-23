# Hollow Square Star Pattern

---

## 1. Pattern Title

Hollow Square Star Pattern

## 2. Difficulty Level

**Medium**

## 3. Problem Statement

Print a square whose boundary is filled with stars and whose inner cells are spaces.

The current implementation uses:

```cpp
int n = 5;
```

## 4. Expected Output

```text
*****
*   *
*   *
*   *
*****
```

## 5. Pattern Observation

Rows 1 and n are solid. For middle rows, only columns 1 and n print stars.

Key observations:

- The outer loop is responsible for row-by-row construction.
- Inner loops decide alignment, repeated cells, or visible values.
- The pattern belongs to the **Star Pattern** category.
- Main concepts: Nested Loops, Conditionals, Boundary Logic.

## 6. Logic Breakdown

- Initialize `n` and loop variables.
- Run the outer loop to visit each row.
- Use one or more inner loops to print spaces, stars, numbers, or alphabets.
- Print a newline after every row so the next row starts cleanly.
- When a counter, parity check, or reverse loop exists, it directly controls the visible sequence.

## 7. Formula Explanation

- `Boundary condition = i == 1 || i == n || j == 1 || j == n`
- `Boundary cells print *`
- `Inner cells print a space`

These formulas match the loop limits in the source code. The row index controls height, and the column loop controls how many symbols appear on each row.

## 8. Dry Run

For `n = 5`:

Row 1:
- Spaces = boundary
- Characters/Values = 5
- Output = `*****`

Row 2:
- Spaces = hollow
- Characters/Values = 5
- Output = `*   *`

Row 3:
- Spaces = hollow
- Characters/Values = 5
- Output = `*   *`

Row 4:
- Spaces = hollow
- Characters/Values = 5
- Output = `*   *`

Row 5:
- Spaces = boundary
- Characters/Values = 5
- Output = `*****`

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
```

## 13. Key Learning Concepts

- Nested Loops
- Conditionals
- Boundary Logic
- Hollow Pattern

## 14. Similar Problems

- Full Star Pyramid
- Full Diamond Star Pattern
- Half Diamond Star Pattern
- Inverted Full Star Pyramid
- Inverted Left Half Star Pyramid
- Inverted Right Half Star Pyramid
- Indented Left Half Star Pyramid
- Right Half Star Pyramid
- Solid Square Star Pattern

## 15. Tags

- Nested Loops
- Conditionals
- Boundary Logic
- Hollow Pattern
