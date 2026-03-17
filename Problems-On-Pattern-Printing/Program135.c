// Input: 5
// 2 4 6 8 10

#include<stdio.h>

void DisplayFrequency(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt * 2);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter The Frequency : ");
    scanf("%d",&iValue);
    
    DisplayFrequency(iValue);
    
    return 0;
}