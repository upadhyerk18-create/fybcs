#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr; // Pointer pointing to the first element of the array

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        // Taking input using pointer arithmetic
        scanf("%d", (ptr + i));
    }

    // Calculating sum using pointer
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    average = sum / n;

    printf("\nSum = %.2f", sum);
    printf("\nAverage = %.2f\n", average);

    return 0;
}

