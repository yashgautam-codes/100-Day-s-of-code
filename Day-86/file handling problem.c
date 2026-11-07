/* Q136. Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. */
#include <stdio.h>
enum MenuChoice 
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};
int main() 
{
    int choice;
    double num1, num2, result = 0;
    int valid = 1;
    printf("--- Simple Menu ---\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch ((enum MenuChoice)choice) 
    {
        case ADD:
            result = num1 + num2;
            printf("Result of Addition: %.2f\n", result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Result of Subtraction: %.2f\n", result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Result of Multiplication: %.2f\n", result);
            break;

        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
            valid = 0;
            break;
    }
return 0;
}
