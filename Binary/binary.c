
#include <stdio.h>

int main() {
    int first, mid, last, size, key, i;
    int a[10];  // Array with a fixed size of 10

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array in sorted order:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the key to find: ");
    scanf("%d", &key);

    // Initialize first and last for binary search
    first = 0;
    last = size - 1;
    
    int found = 0;  // Flag to check if the element is found

    while (first <= last) {
        mid = (first + last) / 2;

        if (a[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;  // Mark as found
            break;
        } else if (a[mid] > key) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
