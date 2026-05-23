# Reverse Starting Alphabet Triangle

---

## 1. Pattern Title

Reverse Starting Alphabet Triangle

## 2. Difficulty Level

**Medium**

## 3. Problem Statement

Print rows that start closer to A each time and end at the same final character.

The current implementation uses:

```cpp
int n = 5;
```

## 4. Expected Output

```text
E
DE
CDE
BCDE
ABCDE
```

## 5. Pattern Observation

For each row, start is calculated as 'A' + (n - i). The inner loop prints from start through 'A' + n - 1.

Key observations:

- The outer loop is responsible for row-by-row construction.
- Inner loops decide alignment, repeated cells, or visible values.
- The pattern belongs to the **Alphabet Pattern** category.
- Main concepts: Nested Loops, ASCII, Reverse Start.

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

For `n = 5`:

Row 1:
- Spaces = none
- Characters/Values = 1
- Output = `E`

Row 2:
- Spaces = none
- Characters/Values = 2
- Output = `DE`

Row 3:
- Spaces = none
- Characters/Values = 3
- Output = `CDE`

Row 4:
- Spaces = none
- Characters/Values = 4
- Output = `BCDE`

Row 5:
- Spaces = none
- Characters/Values = 5
- Output = `ABCDE`

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
    char ch = 'A';

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
```

## 13. Key Learning Concepts

- Nested Loops
- ASCII
- Reverse Start
- Alphabet Range

## 14. Similar Problems

- Repeated Row Alphabet Triangle
- Continuous Alphabet Triangle
- Increasing Alphabet Triangle
- Alphabet Full Pyramid
- Alphabet Palindromic Pyramid
- Reverse Continuous Alphabet Triangle
- Right Aligned Alphabet Triangle

## 15. Tags

- Nested Loops
- ASCII
- Reverse Start
- Alphabet Range
