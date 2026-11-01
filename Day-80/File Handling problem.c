/* Q130. Store multiple student records (name, roll number, marks) into a file using fprintf(). 
Then read them using fscanf() and display each record. */
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    int n, i;
    char name[50];
    int roll_no;
    float marks;
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name (single word): ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll_no);
        printf("Marks: ");
        scanf("%f", &marks);
        fprintf(file, "%s %d %.2f\n", name, roll_no, marks);
    }
    fclose(file); 
    printf("\nData successfully saved to students.txt\n");
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\n--- Displaying Student Records from File ---\n");
    printf("%-20s %-12s %-5s\n", "Name", "Roll No", "Marks");
    printf("--------------------------------------------\n");
    while (fscanf(file, "%s %d %f", name, &roll_no, &marks) != EOF) {
        printf("%-20s %-12d %.2f\n", name, roll_no, marks);
    }
    fclose(file); 
    return 0;
}
