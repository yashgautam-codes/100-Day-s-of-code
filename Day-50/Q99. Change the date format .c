//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
void convertDateFormat(const char *inputDate, char *outputDate) {
    int day, month, year;
    if (sscanf(inputDate, "%d/%d/%d", &day, &month, &year) != 3) {
        printf("Invalid input date format.\n");
        return;
    }
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    if (month < 1 || month > 12) {
        printf("Invalid month value.\n");
        return;
    }
    sprintf(outputDate, "%02d-%s-%d", day, months[month], year);
}
int main() {
    char input[] = "25/04/2026";
    char output[12]; 
    convertDateFormat(input, output);
    printf("Original: %s\n", input);
    printf("Converted: %s\n", output);
    return 0;
}
