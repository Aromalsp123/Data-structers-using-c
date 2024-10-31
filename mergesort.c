#include <stdio.h>

#define SIZE 100


int a[SIZE], b[SIZE];

void merge(int l, int m, int h) {
    int i = l; // Starting index for left subarray
    int j = m + 1; // Starting index for right subarray
    int k = l; // Starting index for merged array

    // Merging the two halves
    while (i <= m && j <= h) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            k++;i++;// Copy smaller element to b
        } else {
            b[k] = a[j];// Copy smaller element to b
            k++;j++;
        }
    }

    // Copy remaining elements of left half, if any
    while (i <= m) {
        b[k] = a[i];
        k++;
        i++;
    }

    // Copy remaining elements of right half, if any
    while (j <= h) {
        b[k] = a[j];
        k++;j++;
    }

    // Copy the merged elements back into the original array
    for (i = l; i <= h; i++) {
        a[i] = b[i];
    }
}

void mergesort(int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        mergesort(l, mid); // Sort the first half
        mergesort(mid + 1, h); // Sort the second half
        merge(l, mid, h); // Merge the sorted halves
    }
}

int main() {
    int n;

    printf("Enter the number of elements (max %d): ", SIZE);
    scanf("%d", &n);
    if (n > SIZE) {
        printf("Number of elements exceeds the maximum size of %d.\n", SIZE);
        return 1;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Read elements into the array
    }

    mergesort(0, n - 1); // Sort the array

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]); // Print the sorted array
    }
    printf("\n");

    return 0;
}

