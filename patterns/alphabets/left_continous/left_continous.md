# Continuous Alphabet Triangle

---

## 1. Pattern Title

Continuous Alphabet Triangle

## 2. Difficulty Level

**Medium**

## 3. Problem Statement

Print a left aligned alphabet triangle where the alphabet continues across rows using a running counter.

The current implementation uses:

```cpp
int n = 5;
```

## 4. Expected Output

```text
A
BC
DEF
GHIJ
KLMNO
```

## 5. Pattern Observation

The variable count is not reset after each row, so every printed position advances to the next alphabet character.

Key observations:

- The outer loop is responsible for row-by-row construction.
- Inner loops decide alignment, repeated cells, or visible values.
- The pattern belongs to the **Alphabet Pattern** category.
- Main concepts: Nested Loops, ASCII, Counter.

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
- Output = `A`

Row 2:
- Spaces = none
- Characters/Values = 2
- Output = `BC`

Row 3:
- Spaces = none
- Characters/Values = 3
- Output = `DEF`

Row 4:
- Spaces = none
- Characters/Values = 4
- Output = `GHIJ`

Row 5:
- Spaces = none
- Characters/Values = 5
- Output = `KLMNO`

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
    int i,j, count = 0;
    char ch = 'A';

    for(i = 1; i<=n ; i++){     // outer loop to print the row
        for(j = 1; j<=i; j++){   // inner loop to print the row element 
                ch = 'A' + count;
                cout << ch;
                count++;
        }

        cout << " "<<endl;
    } 

    return 0;
}
```

## 13. Key Learning Concepts

- Nested Loops
- ASCII
- Counter
- Continuous Characters

## 14. Similar Problems

- Repeated Row Alphabet Triangle
- Increasing Alphabet Triangle
- Alphabet Full Pyramid
- Alphabet Palindromic Pyramid
- Reverse Continuous Alphabet Triangle
- Reverse Starting Alphabet Triangle
- Right Aligned Alphabet Triangle

## 15. Tags

- Nested Loops
- ASCII
- Counter
- Continuous Characters
