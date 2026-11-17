/* Q146. Create Employee structure with nested Date structure for joining date and print details. */
#include <stdio.h>
struct Date 
{
    int day;
    int month;
    int year;
};
struct Employee 
{
    int id;
    char name[50];
    float salary;
    struct Date joiningDate; 
};
int main() 
{
    struct Employee emp1 = {
        101, 
        "Rahul Sharma", 
        55000.50, 
        {15, 8, 2024} 
    };
    printf("--- Employee Details ---\n");
    printf("Employee ID   : %d\n", emp1.id);
    printf("Name          : %s\n", emp1.name);
    printf("Salary        : %.2f\n", emp1.salary);
    printf("Joining Date  : %02d/%02d/%d\n", 
           emp1.joiningDate.day, 
           emp1.joiningDate.month, 
           emp1.joiningDate.year);
    return 0;
}
