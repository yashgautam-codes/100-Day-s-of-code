/* Q139. Show that enums store integers by printing assigned values. */
#include <stdio.h>
enum Level 
{
    LOW,     
    MEDIUM,  
    HIGH     
};
int main() 
{
    printf("Value of LOW:    %d\n", LOW);
    printf("Value of MEDIUM: %d\n", MEDIUM);
    printf("Value of HIGH:   %d\n", HIGH);
    return 0;
}
