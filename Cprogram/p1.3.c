#include <stdio.h>

// Define structure for student details
struct Student {
    int roll_no;
    char name[50];
    float percentage;
};

int main() {
    int n, i, max_index = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures
    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Percentage: ");
        scanf("%f", &s[i].percentage);

        // Update index of student with maximum percentage
        if (s[i].percentage > s[max_index].percentage) {
            max_index = i;
        }
    }

    // Display details of the student with the highest percentage
    printf("\n--- Student with Maximum Percentage ---\n");
    printf("Roll Number: %d\n", s[max_index].roll_no);
    printf("Name: %s\n", s[max_index].name);
    printf("Percentage: %.2f%%\n", s[max_index].percentage);

    return 0;
}

