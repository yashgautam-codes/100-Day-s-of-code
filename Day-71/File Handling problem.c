/* Q121. Write a C program that creates a text file named info.txt in write mode. 
The program should take the user’s name and age as input, and write them to the file using fprintf(). 
After writing, display a message confirming that the data was successfully saved. */
#include <stdio.h>
int main() {
    char name[50];
    int age;
    FILE *fptr = fopen("info.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Age: %d\n", age);
    fclose(fptr);
    printf("Data was successfully saved to info.txt!\n");
    return 0;
}
