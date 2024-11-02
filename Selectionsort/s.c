
#include <stdio.h>

int main() {
    int i, j, n, a[10], key, temp, min;

    // Prompt the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        min = i; // Assume the minimum is the first element
        for (j = i + 1; j < n; j++) { // Corrected from i++ to j++
            if (a[j] < a[min]) {
                min = j; // Update min if a smaller element is found
            }
        }
        // Swap the found minimum element with the first element
        if (min != i) { // Only swap if min is not the same as i
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }

    // Print the sorted elements
    printf("Sorted elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
