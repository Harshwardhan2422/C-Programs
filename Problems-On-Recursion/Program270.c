#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt = 1;
    
    while(iCnt <= iNo)
    {
        printf("*\n");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter The Frequency : ");
    scanf("%d",&iValue);
    
    DisplayI(iValue);
    printf("End Of Main \n");
    
    return 0;
}