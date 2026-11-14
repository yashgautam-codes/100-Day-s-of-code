/* Q143. Find and print the student with the highest marks. */
#include <stdio.h>
struct Student 
{
    char name[50];
    int roll_no;
    float marks;
};
int main() 
{
    int n, i, top_index = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Invalid number of students.\n");
        return 1;
    }
    struct Student students[n];
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    for (i = 1; i < n; i++) 
    {
        if (students[i].marks > students[top_index].marks) 
        {
            top_index = i;
        }
    }
    printf("\n--- Student with the Highest Marks ---\n");
    printf("Name: %s\n", students[top_index].name);
    printf("Roll Number: %d\n", students[top_index].roll_no);
    printf("Marks: %.2f\n", students[top_index].marks);
    return 0;
}
