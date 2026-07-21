Definition
-----------------
Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
This process is repeated until no swaps are needed, meaning the list is sorted.

Working Principle
-----------------------------------------
Compare adjacent elements.

If the left element is greater than the right, swap them.

Each pass moves the largest element to its correct position at the end.

After n-1 passes, the array becomes sorted.


Algorithm
----------------
Step 1: Start

Step 2: Repeat for i = 0 to n - 2
        → flag = 0  // to check if any swap happened

Step 3: Repeat for j = 0 to n - i - 2
        → If A[j] > A[j + 1]
              Swap A[j] and A[j + 1]
              flag = 1

Step 4: If flag == 0
        → Break (array already sorted)

Step 5: Repeat Steps 2 to 4 until array is sorted

Step 6: Stop



Dry Run
--------------------------------
| Pass | Comparisons                                                    | Array after pass   |
| ---- | -------------------------------------------------------------- | ------------------ |
| 1    | (20,5) → swap → (20,13) → swap → (20,8) → swap → (20,2) → swap | \[5, 13, 8, 2, 20] |
| 2    | (5,13) → ok → (13,8) → swap → (13,2) → swap                    | \[5, 8, 2, 13, 20] |
| 3    | (5,8) → ok → (8,2) → swap                                      | \[5, 2, 8, 13, 20] |
| 4    | (5,2) → swap                                                   | \[2, 5, 8, 13, 20] |



Time Complexity
---------------------
Best Case (Already Sorted): O(n) with optimization flag.

Worst Case: O(n²)

Average Case: O(n²)

Space Complexity
O(1) → In-place sorting

Advantages
------------------------------
Simple to understand and implement

Works well for small datasets

Disadvantages
--------------------------------------------------
Very slow for large datasets

High number of comparisons and swaps

T(n) Derivation
----------------------------
Comparisons in each pass: (n-1) + (n-2) + … + 1

T(n) = (n × (n - 1)) / 2 = O(n²)