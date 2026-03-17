#include<stdio.h>

int Addition(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;
    
    if(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
        Addition(iNo);
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
