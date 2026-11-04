/* Q133. Create an enum for months and print how many days each month has.*/
#include <stdio.h>
enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};
int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char* names[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    for (enum Month m = JAN; m <= DEC; m++) {
        printf("%s has %d days\n", names[m - 1], days[m - 1]);
    }
    return 0;
}
