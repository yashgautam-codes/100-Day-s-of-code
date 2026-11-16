/* Q145. Return a structure containing top student's details from a function. */
#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    char name[50];
    float gpa;
};
struct Student getTopStudent(struct Student list[], int count) 
{
    struct Student top = list[0];
    for (int i = 1; i < count; i++) {
        if (list[i].gpa > top.gpa) {
            top = list[i]; 
        }
    }
    return top;
}
void printStudent(struct Student s) 
{
    printf("Top Student Details:\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("GPA: %.2f\n", s.gpa);
}
int main() 
{
    struct Student classList[3] = {
        {101, "Alice Johnson", 3.85},
        {102, "Bob Smith", 3.92},
        {103, "Charlie Davis", 3.60}
    };
    struct Student winner = getTopStudent(classList, 3);
    printStudent(winner);
    return 0;
}
