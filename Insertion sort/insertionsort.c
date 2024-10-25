#include <stdio.h>

int main() {
    int n, i, a[100], j, temp;

    // Input size of the array
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Insertion Sort Algorithm
    for (i = 1; i < n; i++) {
        temp = a[i]; // The current element to be inserted
        j = i - 1;

        // Shift elements of a[0..i-1] that are greater than temp
       // Both condition is true it will exicutive 
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp; // Insert the temp at its correct position
    }

    // Print the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]); // Print each element in the sorted array
    }
    printf("\n");

    return 0;
}
