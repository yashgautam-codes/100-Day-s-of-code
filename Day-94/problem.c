/* Q144. Write a function that accepts a structure as parameter and prints its members. */
#include <stdio.h>
#include <string.h>
struct Student 
{
    int id;
    char name[50];
    float gpa;
};
void printStudent(struct Student s) 
{
    printf("Student ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("GPA: %.2f\n", s.gpa);
}
int main() 
{
    struct Student student1;
    student1.id = 101;
    strcpy(student1.name, "Alice Johnson");
    student1.gpa = 3.85;
    printStudent(student1);
    return 0;
}
