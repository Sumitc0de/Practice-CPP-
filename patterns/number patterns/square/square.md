# Repeated Row Number Square

---

## 1. Pattern Title

Repeated Row Number Square

## 2. Difficulty Level

**Easy**

## 3. Problem Statement

Print an n by n square where every row contains the row number repeated n times.

The current implementation uses:

```cpp
int n = 4;
```

## 4. Expected Output

```text
1111
2222
3333
4444
```

## 5. Pattern Observation

Both loops run n times. The row index i is printed in every column of that row.

Key observations:

- The outer loop is responsible for row-by-row construction.
- Inner loops decide alignment, repeated cells, or visible values.
- The pattern belongs to the **Number Pattern** category.
- Main concepts: Nested Loops, Square Pattern, Repeated Numbers.

## 6. Logic Breakdown

- Initialize `n` and loop variables.
- Run the outer loop to visit each row.
- Use one or more inner loops to print spaces, stars, numbers, or alphabets.
- Print a newline after every row so the next row starts cleanly.
- When a counter, parity check, or reverse loop exists, it directly controls the visible sequence.

## 7. Formula Explanation

- `Rows = n`
- `Columns = n`
- `Total printed cells = n * n`

These formulas match the loop limits in the source code. The row index controls height, and the column loop controls how many symbols appear on each row.

## 8. Dry Run

For `n = 4`:

Row 1:
- Spaces = none
- Characters/Values = 4
- Output = `1111`

Row 2:
- Spaces = none
- Characters/Values = 4
- Output = `2222`

Row 3:
- Spaces = none
- Characters/Values = 4
- Output = `3333`

Row 4:
- Spaces = none
- Characters/Values = 4
- Output = `4444`

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

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<< i;
        }

        cout <<" "<<endl;
    }

    return 0;
}
```

## 13. Key Learning Concepts

- Nested Loops
- Square Pattern
- Repeated Numbers

## 14. Similar Problems

- Zero One Triangle
- Floyd Triangle
- Repeated Number Triangle
- Reverse Increasing Number Triangle
- Increasing Number Triangle
- Number Palindromic Pyramid
- Repeated Number Triangle
- Right Aligned Number Triangle
- Number Diamond Pattern

## 15. Tags

- Nested Loops
- Square Pattern
- Repeated Numbers
