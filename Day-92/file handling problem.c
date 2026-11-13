/* Q142. Store details of 5 students in an array of structures and print all. */
#include <stdio.h>
struct Student 
{
    char name[50];
    int rollNo;
    float marks;
};
int main() 
{
    struct Student s[5];
    int i;
    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n--- Displaying Student Information ---\n");
    for (i = 0; i < 5; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollNo);
        printf("Marks: %.2f\n", s[i].marks);
    }
    return 0;
}
