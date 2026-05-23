# Inverted Full Star Pyramid

---

## 1. Pattern Title

Inverted Full Star Pyramid

## 2. Difficulty Level

**Medium**

## 3. Problem Statement

Print a centered inverted full pyramid using stars.

The current implementation uses:

```cpp
int n = 5;
```

## 4. Expected Output

```text
*********
 *******
  *****
   ***
    *
```

## 5. Pattern Observation

Spaces increase by one each row, while stars follow 2 * (n - i) + 1.

Key observations:

- The outer loop is responsible for row-by-row construction.
- Inner loops decide alignment, repeated cells, or visible values.
- The pattern belongs to the **Star Pattern** category.
- Main concepts: Nested Loops, Spaces, Odd Series.

## 6. Logic Breakdown

- Initialize `n` and loop variables.
- Run the outer loop to visit each row.
- Use one or more inner loops to print spaces, stars, numbers, or alphabets.
- Print a newline after every row so the next row starts cleanly.
- When a counter, parity check, or reverse loop exists, it directly controls the visible sequence.

## 7. Formula Explanation

- `Spaces control alignment.`
- `Visible characters are controlled by the row formula used in the inner loop.`

These formulas match the loop limits in the source code. The row index controls height, and the column loop controls how many symbols appear on each row.

## 8. Dry Run

For `n = 5`:

Row 1:
- Spaces = 0
- Characters/Values = 9
- Output = `*********`

Row 2:
- Spaces = 1
- Characters/Values = 7
- Output = ` *******`

Row 3:
- Spaces = 2
- Characters/Values = 5
- Output = `  *****`

Row 4:
- Spaces = 3
- Characters/Values = 3
- Output = `   ***`

Row 5:
- Spaces = 4
- Characters/Values = 1
- Output = `    *`

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
    for(i = 1; i<=n; i++){
        for(j = 1;j<=i-1;j++){
            cout <<" ";
        }
        for(j =1 ; j<=(2*(n-i)+1); j++){
            cout << "*";
        }
        cout << "\n"; 
    }
    return 0;
}
```

## 13. Key Learning Concepts

- Nested Loops
- Spaces
- Odd Series
- Inverted Pyramid

## 14. Similar Problems

- Full Star Pyramid
- Full Diamond Star Pattern
- Half Diamond Star Pattern
- Hollow Square Star Pattern
- Inverted Left Half Star Pyramid
- Inverted Right Half Star Pyramid
- Indented Left Half Star Pyramid
- Right Half Star Pyramid
- Solid Square Star Pattern

## 15. Tags

- Nested Loops
- Spaces
- Odd Series
- Inverted Pyramid
