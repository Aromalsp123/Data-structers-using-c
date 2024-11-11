#include <stdio.h>

struct polynomial {
    int coeff;
    int expo;
};

int main() {
    struct polynomial p1[10], p2[10], p3[20]; // Increased size for p3 to accommodate the result
    int n1, n2, n3, i, j, k;

    // Input for polynomial p1
    printf("Enter the number of terms in polynomial p1: ");
    scanf("%d", &n1);
    printf("Enter the terms in polynomial p1 (coeff and expo):\n");
    for (i = 0; i < n1; i++) {
        printf("Term %d: ", i + 1);
        scanf("%d%d", &p1[i].coeff, &p1[i].expo);
    }

    // Input for polynomial p2
    printf("Enter the number of terms in polynomial p2: ");
    scanf("%d", &n2);
    printf("Enter the terms in polynomial p2 (coeff and expo):\n");
    for (i = 0; i < n2; i++) {
        printf("Term %d: ", i + 1);
        scanf("%d%d", &p2[i].coeff, &p2[i].expo);
    }

    i = 0;
    j = 0;
    k = 0;

    // Adding the two polynomials
    while (i < n1 && j < n2) {
        if (p1[i].expo > p2[j].expo) {
            p3[k].coeff = p1[i].coeff;
            p3[k].expo = p1[i].expo;
            i++;
        } else if (p1[i].expo < p2[j].expo) {
            p3[k].coeff = p2[j].coeff;
            p3[k].expo = p2[j].expo;
            j++;
        } else {
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            p3[k].expo = p1[i].expo;
            i++;
            j++;
        }
        k++;
    }

    // Copy remaining terms of p1
    while (i < n1) {
        p3[k] = p1[i];
        i++;
        k++;
    }

    // Copy remaining terms of p2
    while (j < n2) {
        p3[k] = p2[j];
        j++;
        k++;
    }

    n3 = k; // Number of terms in the resultant polynomial

    // Print the resultant polynomial
    printf("Resultant polynomial (p3): ");
    for (i = 0; i < n3; i++) {
        printf("%dx^%d", p3[i].coeff, p3[i].expo);
        if (i != n3 - 1) {
            printf(" + ");
        }
    }
    printf("\n");

    return 0;
}
