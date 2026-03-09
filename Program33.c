#include<stdio.h>

void DisplayResult(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("\n%d\n",iCnt);
    }
}

int main()
{
    int iFrequency = 0;
    
    printf("Enter The Frequency : \n");
    scanf("%d",&iFrequency);
    
    DisplayResult(iFrequency);
    
    return 0;
}