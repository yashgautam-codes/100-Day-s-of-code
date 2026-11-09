/* Q138. Print all enum names and integer values using a loop.*/
#include <stdio.h>
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    COUNT 
};
const char* dayNames[] = {
    "SUNDAY",
    "MONDAY",
    "TUESDAY",
    "WEDNESDAY",
    "THURSDAY",
    "FRIDAY",
    "SATURDAY"
};
int main() 
{
    for (int i = 0; i < COUNT; i++) {
        printf("Name: %-10s | Value: %d\n", dayNames[i], i);
    }

    return 0;
}
