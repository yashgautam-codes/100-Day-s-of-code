// Q10. Write a program to input time in seconds and convert it to hour's:minute's:second's format.
#include<stdio.h>
int main()
{
    int time;
    printf("Enter the time (in sec.):- ");
    scanf("%d",&time);
    int hr = time/3600;
    int min = (time-hr*3600)/60;
    int sec = time - (hr*3600 + min*60);
    printf("%d",hr);
    printf(":%d",min);
    printf(":%d",sec);
    return 0;
}
