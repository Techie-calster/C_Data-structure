#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int flag;
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if elements are in wrong order
            if (arr[j] > arr[j + 1]) {
                 flag=1;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            if(flag!=1)
            {
            break;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);           // Read size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    bubbleSort(arr, n);        // Call Bubble Sort

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print sorted array
    }

    return 0;
}