#include<stdio.h>

void DisplayFrequency(int iNo)
{
    int iCnt = 0;
    
        // 1         2            3
    for(iCnt = 0; iCnt >= -iNo; iCnt--)
    {
        printf("%d\t",iCnt);    // 4
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