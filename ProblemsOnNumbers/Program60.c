#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    
    if(iNo == 0)        // Filter 
    {
        printf("0 Has Infinity Factors!\n");
        return;
    }
    if(iNo < 0)
    {
        iNo = -iNo;        // Updator 
    }
    
    printf("Factors Of %d Are : \n",iNo);
    
    while(iCnt <= iNo/2)        // loop iterate half of time
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
    }
    printf("%d\n",iNo);        // input Itself 
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    DisplayFactors(iValue);
    
    return 0;
}