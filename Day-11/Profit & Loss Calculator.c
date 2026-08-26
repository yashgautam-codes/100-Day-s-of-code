// Q22. Write a Program to find profit or loss percentage given cost price and selling price. 
#include <stdio.h>
int main()
{
    float cp;
    printf("Enter the Cost Price :- ");
    scanf("%f",&cp);
    float sp;
    printf("Enter the Selling Price :- ");
    scanf("%f",&sp);
    if (sp>cp)
    {
        float p = sp-cp;
        float q1 = (p/cp)*100;
        printf("Profit Percent :- %f",q1);
    }
    else
    {
        float l = cp-sp;
        float q2 = (l/cp)*100;
        printf("Loss Percent :- %f",q2);
    }
    return 0;
}
