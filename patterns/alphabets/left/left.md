# Repeated Row Alphabet Triangle

---

## 1. Pattern Title

Repeated Row Alphabet Triangle

## 2. Difficulty Level

**Easy**

## 3. Problem Statement

Print a left aligned alphabet triangle where each row repeats one character. Row i prints the character 'A' + i - 1 exactly i times.

The current implementation uses:

```cpp
int n = 26;
```

## 4. Expected Output

```text
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
HHHHHHHH
IIIIIIIII
JJJJJJJJJJ
KKKKKKKKKKK
LLLLLLLLLLLL
MMMMMMMMMMMMM
NNNNNNNNNNNNNN
OOOOOOOOOOOOOOO
PPPPPPPPPPPPPPPP
QQQQQQQQQQQQQQQQQ
RRRRRRRRRRRRRRRRRR
SSSSSSSSSSSSSSSSSSS
TTTTTTTTTTTTTTTTTTTT
UUUUUUUUUUUUUUUUUUUUU
VVVVVVVVVVVVVVVVVVVVVV
WWWWWWWWWWWWWWWWWWWWWWW
XXXXXXXXXXXXXXXXXXXXXXXX
YYYYYYYYYYYYYYYYYYYYYYYYY
ZZZZZZZZZZZZZZZZZZZZZZZZZZ
```

## 5. Pattern Observation

The outer loop selects the row and therefore the alphabet. The inner loop controls how many times that row character is printed.

Key observations:

- The outer loop is responsible for row-by-row construction.
- Inner loops decide alignment, repeated cells, or visible values.
- The pattern belongs to the **Alphabet Pattern** category.
- Main concepts: Nested Loops, ASCII, Left Triangle.

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

For `n = 26`:

Row 1:
- Spaces = none
- Characters/Values = 1
- Output = `A`

Row 2:
- Spaces = none
- Characters/Values = 2
- Output = `BB`

Row 3:
- Spaces = none
- Characters/Values = 3
- Output = `CCC`

Row 4:
- Spaces = none
- Characters/Values = 4
- Output = `DDDD`

Row 5:
- Spaces = none
- Characters/Values = 5
- Output = `EEEEE`

Row 6:
- Spaces = none
- Characters/Values = 6
- Output = `FFFFFF`

Row 7:
- Spaces = none
- Characters/Values = 7
- Output = `GGGGGGG`

Row 8:
- Spaces = none
- Characters/Values = 8
- Output = `HHHHHHHH`

Row 9:
- Spaces = none
- Characters/Values = 9
- Output = `IIIIIIIII`

Row 10:
- Spaces = none
- Characters/Values = 10
- Output = `JJJJJJJJJJ`

Row 11:
- Spaces = none
- Characters/Values = 11
- Output = `KKKKKKKKKKK`

Row 12:
- Spaces = none
- Characters/Values = 12
- Output = `LLLLLLLLLLLL`

Row 13:
- Spaces = none
- Characters/Values = 13
- Output = `MMMMMMMMMMMMM`

Row 14:
- Spaces = none
- Characters/Values = 14
- Output = `NNNNNNNNNNNNNN`

Row 15:
- Spaces = none
- Characters/Values = 15
- Output = `OOOOOOOOOOOOOOO`

Row 16:
- Spaces = none
- Characters/Values = 16
- Output = `PPPPPPPPPPPPPPPP`

Row 17:
- Spaces = none
- Characters/Values = 17
- Output = `QQQQQQQQQQQQQQQQQ`

Row 18:
- Spaces = none
- Characters/Values = 18
- Output = `RRRRRRRRRRRRRRRRRR`

Row 19:
- Spaces = none
- Characters/Values = 19
- Output = `SSSSSSSSSSSSSSSSSSS`

Row 20:
- Spaces = none
- Characters/Values = 20
- Output = `TTTTTTTTTTTTTTTTTTTT`

Row 21:
- Spaces = none
- Characters/Values = 21
- Output = `UUUUUUUUUUUUUUUUUUUUU`

Row 22:
- Spaces = none
- Characters/Values = 22
- Output = `VVVVVVVVVVVVVVVVVVVVVV`

Row 23:
- Spaces = none
- Characters/Values = 23
- Output = `WWWWWWWWWWWWWWWWWWWWWWW`

Row 24:
- Spaces = none
- Characters/Values = 24
- Output = `XXXXXXXXXXXXXXXXXXXXXXXX`

Row 25:
- Spaces = none
- Characters/Values = 25
- Output = `YYYYYYYYYYYYYYYYYYYYYYYYY`

Row 26:
- Spaces = none
- Characters/Values = 26
- Output = `ZZZZZZZZZZZZZZZZZZZZZZZZZZ`

## 9. Step-by-Step Algorithm

1. Start the program.
2. Set `n = 26`.
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

    int n = 26; 
    int i,j;
    char ch = 'A';

    for(i = 1; i<=n ; i++){     // outer loop to print the row
        for(j = 1; j<=i; j++){   // inner loop to print the row element 
                ch =  'A' + i- 1;
                cout << ch;
        
        }

        cout << " "<<endl;
    } 

    return 0;
}
```

## 13. Key Learning Concepts

- Nested Loops
- ASCII
- Left Triangle
- Repeated Characters

## 14. Similar Problems

- Continuous Alphabet Triangle
- Increasing Alphabet Triangle
- Alphabet Full Pyramid
- Alphabet Palindromic Pyramid
- Reverse Continuous Alphabet Triangle
- Reverse Starting Alphabet Triangle
- Right Aligned Alphabet Triangle

## 15. Tags

- Nested Loops
- ASCII
- Left Triangle
- Repeated Characters
