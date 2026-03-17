#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    static int iCount = 0;
    
    if(iNo != 0)
    {
        iDigit = (iNo % 10);
        if(iDigit % 2 == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
        CountEven(iNo);
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter The Number : ");
    scanf("%d",&iValue);
    
    iRet = CountEven(iValue);
    printf("Count Of Even Digit : %d\n",iRet);

    return 0;
}