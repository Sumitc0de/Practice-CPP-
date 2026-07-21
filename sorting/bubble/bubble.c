#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


// void bubbleSort(int arr[], int n)
// {
//     int i, j, swapped;
//     for (i = 0; i < n - 1; i++)
//     {
//         swapped = 0; // reset for each pass
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(&arr[j], &arr[j + 1]);
//                 swapped = 1;
//             }
//         }
//         if (swapped == 0) // no swaps → already sorted
//             break;
//     }
// }



int main()
{
    int arr[] = {20, 5, 13, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
