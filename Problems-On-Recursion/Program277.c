#include<stdio.h>

int CountDigit(int iNo)
{
    static int iCount = 0;
    
    if(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
        CountDigit(iNo);
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter The Frequency : ");
    scanf("%d",&iValue);
    
    iRet = CountDigit(iValue);
    printf("Number Of Digits is : %d\n",iRet);

    return 0;
}