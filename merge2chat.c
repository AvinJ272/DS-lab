#include <stdio.h>

void main() {
    int a[10], b[10], c[20];
    int i, j, n, m, size, k;

    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    printf("Enter the size of the second array: ");
    scanf("%d", &m);

    // Input elements for the first array
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input elements for the second array
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Merging arrays into array c
    size = n + m;
    for (i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for (i = 0; i < m; i++) {
        c[i + n] = b[i];
    }

    // Sorting the merged array using bubble sort
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (c[i] > c[j]) {
                // Swap
                k = c[i];
                c[i] = c[j];
                c[j] = k;
            }
        }
    }

    // Printing the merged and sorted array
    printf("The merged and sorted array is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
}

