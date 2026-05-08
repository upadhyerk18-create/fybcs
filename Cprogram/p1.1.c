#include <stdio.h>

/* Define macro to find maximum of two numbers */
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
    int num1, num2, largest;

    // Input two numbers from user
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the macro
    largest = MAX(num1, num2);

    printf("The maximum number is: %d\n", largest);

    return 0;
}

