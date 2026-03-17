#include<stdio.h>

int SumOfDigitR(int iNo)
{
    static int iSum = 0;
    
    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        SumOfDigitR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter The Frequency : ");
    scanf("%d",&iValue);
    
    iRet = SumOfDigitR(iValue);
    printf("Sum Of Digit Is : %d\n",iRet);

    return 0;
}