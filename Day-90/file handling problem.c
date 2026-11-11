/* Q140. Define a struct with enum Gender and print person's gender. */
#include <stdio.h>
enum Gender 
{
    MALE,
    FEMALE,
    OTHER
};
struct Person 
{
    char name[50];
    enum Gender gender;
};
int main() 
{
    struct Person p1 = {"Alex", FEMALE};
    printf("Name: %s\n", p1.name);
    printf("Gender: ");
    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }
    return 0;
}
