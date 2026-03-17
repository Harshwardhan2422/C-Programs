#include<stdio.h>

int Addition(int iNo)
{
    int iCnt = 1,iSum = 0;
    
    while(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter The Frequency : ");
    scanf("%d",&iValue);
    
    iRet = Addition(iValue);
    printf("Addition is : %d\n",iRet);

    return 0;
}