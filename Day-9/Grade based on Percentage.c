// Q18. Write a program to accept a percentage (0-100) and assign a grade based on the following criteria :
//        90-100:Grade A
//        80-89:Grade B
//        70-79:Grade C
//        60-69:Grade D
//        below 60:Grade F
#include <stdio.h>
int main()
{
    float n;
    printf("Enter the Percentage :- ");
    scanf("%f",&n);
    if(n>=90 && n<=100){
        printf("Grade 'A'");
    }
    if(n>=80 && n<90){
        printf("Grade 'B'");
    }
    if(n>=70 && n<80){
        printf("Grade 'C'");
    }
    if(n>=60 && n<70){
        printf("Grade 'D'");
    }
    if(n<60){
        printf("Grade 'F'");
    }
    return 0;
}
