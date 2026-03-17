/*
Number : 5
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/


#include<stdio.h>

void PatternPrinter(int iNo)
{
    int i = 0, j = 0, k = 0;
    
    for(i = 1; i <= iNo; i++)
    {
        for(k = i; k < iNo; k++)
        {
            printf("  ");
        }
        for(j = 1; j <= (2 * i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    PatternPrinter(iValue);
    
    return 0;
}