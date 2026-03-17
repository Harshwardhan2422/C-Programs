// Input: 4
// -4 -3 -2 -1 0 1  2  3  4 

#include<stdio.h>

void DisplayFrequency(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter The Frequency : ");
    scanf("%d",&iValue);
    
    DisplayFrequency(iValue);
    
    return 0;
}