#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    
    if(iNo == 0)        // Filter 
    {
        printf("0 Has Infinity Factors \n");
        return;
    }
    if(iNo < 0)
    {
        iNo = -iNo;        // Updator 
    }
    
    printf("Factors Of %d Are : \n",iNo);
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
    printf("%d\n",iNo);        // print Input          
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    DisplayFactors(iValue);
    
    return 0;
}