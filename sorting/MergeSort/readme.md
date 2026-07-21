📌 What is Merge Sort?
------------------------------------------
Merge Sort is a divide and conquer sorting algorithm.
It works by dividing the array into halves, sorting each half recursively, and then merging the two sorted halves.


🔧 Key Idea
-------------------------------------------------
1. Divide array into two halves.

2. Recursively sort each half.

3. Merge two sorted halves into a single sorted array.


Merge Sort Psuedocode 
-------------------------------------------
Function: MergeSort(A, left, right)

1. If left >= right → return (only 1 element).

2. Find mid = (left + right) / 2.

3. Call MergeSort(A, left, mid).

4. Call MergeSort(A, mid + 1, right).

5. Call Merge(A, left, mid, right).



Function: Merge(A, left, mid, right)

1. Find sizes of two halves

    n1 = mid - l + 1

    n2 = h - mid

2. Create temp arrays

    L[n1] for left half

    R[n2] for right half

3. Copy elements

    For i = 0 to n1 - 1 → L[i] = arr[l + i]

    For j = 0 to n2 - 1 → R[j] = arr[mid + 1 + j]

4. Initialize pointers

    i = 0 (L array)

    j = 0 (R array)

    k = l (main array index)

5.Compare and merge

    While i < n1 and j < n2:

    If L[i] <= R[j] → arr[k] = L[i], i++

    Else → arr[k] = R[j], j++

    k++

6. Copy leftover elements

    While i < n1 → arr[k] = L[i], i++, k++

    While j < n2 → arr[k] = R[j], j++, k++

Return — merged part is now sorted in arr[l...h].



## ✍️ Algorithm: Merge Sort
### Procedure MergeSort(A, left, right)

1. If left ≥ right, return (array has 0 or 1 element, already sorted).

2. Find mid = (left + right) / 2.

3. Call MergeSort(A, left, mid).

4. Call MergeSort(A, mid + 1, right).

5. Call Merge(A, left, mid, right).

### Procedure Merge(A, left, mid, right)

1.Let n1 = mid – left + 1 and n2 = right – mid.

2. Create two temporary arrays:

* L[1…n1] for left half

* R[1…n2] for right half

3. Copy elements:

* For i = 1 to n1, set L[i] = A[left + i – 1].

* For j = 1 to n2, set R[j] = A[mid + j].

4. Initialize indices: i = 1, j = 1, k = left.

5. While i ≤ n1 and j ≤ n2:

* If L[i] ≤ R[j], set A[k] = L[i], increment i.

* Else set A[k] = R[j], increment j.

* Increment k.

6. Copy any remaining elements of L into A.

7. Copy any remaining elements of R into A.

8. Return (subarray A[left…right] is now sorted).


🧠 Dry Run Example (Merge Sort with Passes)
----------------------------------------
Input: A = [38, 27, 43, 3, 9, 82, 10]

1. Pass 1 → Divide into halves

    [38, 27, 43, 3] | [9, 82, 10]

2. Pass 2 → Further divide
    [38, 27] | [43, 3] | [9, 82] | [10]

3. Pass 3 → Divide into single elements

    [38] | [27] | [43] | [3] | [9] | [82] | [10]

4. Pass 4 → Start merging pairs

    Merge [38] + [27] → [27, 38]

    Merge [43] + [3] → [3, 43]

    Merge [9] + [82] → [9, 82]

    Now we have:
    [27, 38] | [3, 43] | [9, 82] | [10]

5. Pass 5 → Merge again

    Merge [27, 38] + [3, 43] → [3, 27, 38, 43]

    Merge [9, 82] + [10] → [9, 10, 82]

    Now we have:
    [3, 27, 38, 43] | [9, 10, 82]

6. Pass 6 → Final Merge

    Merge [3, 27, 38, 43] + [9, 10, 82] → [3, 9, 10, 27, 38, 43, 82]

✅ Final Sorted Array:
[3, 9, 10, 27, 38, 43, 82]


Time and Space Complexity
-----------------------------------------------
| Case       | Time Complexity | Why?                                        |
| ---------- | --------------- | ------------------------------------------- |
| Best Case  | O(n log n)      | Always divides array into halves            |
| Average    | O(n log n)      | Every split + merge balanced                |
| Worst Case | O(n log n)      | Still divides into halves (stable behavior) |

## Merge Sort takes O(n log n) because:

* The array is divided log₂(n) times.

* At each level, merging costs O(n).

* Total work = O(n log n).

#### 📌 You can also say in one line (good for exams):

Merge Sort performs log n levels of division, and at each level merging requires n comparisons, hence total = O(n log n).

* Space: O(n) (extra arrays for merging)

* Stable? → ✅ Yes

📐 T(n) Derivation
------------------------------
T(n) = 2T(n/2) + O(n)

Using Master’s Theorem:
T(n) = O(n log n)


✅ Advantages of Merge Sort
--------------------------------------------
| 🔹 Advantage                 | 💡 Why it’s useful                              |
| ---------------------------- | ----------------------------------------------- |
| 1. **Stable sorting**        | Keeps order of equal elements                   |
| 2. **Guaranteed O(n log n)** | Doesn’t degrade like Quick Sort                 |
| 3. **Good for large data**   | Works well on linked lists and external sorting |
| 4. **Divide & Conquer**      | Easy to parallelize                             |


❌ Disadvantages of Merge Sort
-----------------------------------
| 🔻 Disadvantage                | ⚠️ Explanation                   |
| ------------------------------ | -------------------------------- |
| 1. **Extra space required**    | Needs O(n) additional arrays     |
| 2. **Slower for small arrays** | Insertion sort is better there   |
| 3. **Not in-place**            | Requires extra memory allocation |


✅ Quick Interview Facts
--------------------------------------
| Feature         | Value             |
| --------------- | ----------------- |
| Type            | Comparison-based  |
| Adaptive        | ❌ No              |
| Stable          | ✅ Yes             |
| In-place        | ❌ No (needs O(n)) |
| Best Case Time  | O(n log n)        |
| Worst Case Time | O(n log n)        |
| Space           | O(n)              |




