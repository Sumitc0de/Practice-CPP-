#include <stdio.h>

void merge(int arr[], int l, int mid, int h)
{
    int n1 = mid - l + 1;  // size for left half
    int n2 = h - mid;      // size for right half 

    int L[n1], R[n2];  // created left and right array 

    for (int i = 0; i < n1; i++) {  // storing arrays elem to left array 
        L[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++) {  // storing arrays elem to right array 
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k =l;   
// main part where the sorted elem is inserted in array 
    while(i<n1 && j<n2){        
      if (L[i] <= R[j])           // comparing the smallest elem with bigger elem
            arr[k++] = L[i++];    // storing the smallest elem to array 
        else
            arr[k++] = R[j++];    // else storing the bigger one 
    }

    // storing the remaining elem from the left half 
    while(i<n1){
        arr[k++] = L[i++];
    }

    // storing the remaining elem from the right half 
    while(j<n2){
        arr[k++] = R[j++];
    }
}

void mergeSort(int arr[], int l, int h) {
    if (l < h) {
        int mid = l + (h - l) / 2;  // 0 + (4-0)/2  => 2

        mergeSort(arr, l, mid); //left half
        mergeSort(arr, mid + 1, h);  //right half 
        merge(arr, l, mid, h); 
    }
}

int main() {
    int arr[] = {10, 30, 20, 50, 40}; // unsorted array 
    int n = sizeof(arr) / sizeof(arr[0]);  

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}





























// void merge(int arr[], int l, int mid, int h, int n) {
//     int temp[n];
//     int i = l, j = mid + 1, k = l;

//     while (i <= mid && j <= h) {
//         if (arr[i] < arr[j]) {
//             temp[k++] = arr[i++];
//         } else {
//             temp[k++] = arr[j++];
//         }
//     }

//     while (i <= mid) {
//         temp[k++] = arr[i++];
//     }

//     while (j <= h) {
//         temp[k++] = arr[j++];
//     }

//     // Copy the merged elements back to the original array
//     for (int x = l; x <= h; x++) {
//         arr[x] = temp[x];
//     }
// }