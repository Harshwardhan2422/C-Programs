#include<stdio.h>

void DisplayResult(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt > 0; iCnt--)
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