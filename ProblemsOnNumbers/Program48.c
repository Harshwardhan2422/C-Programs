#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1,int iNo2)
{
    if(iNo2 == 0)
    {
        printf("Error : Divisor Cannot be zero! \n");
        return false;
    }
    if(iNo1 % iNo2 != 0)        // With != 
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue1);
    printf("Enter Divisor : \n");
    scanf("%d",&iValue2);
    
    bRet = CheckDivisible(iValue1, iValue2);
    
    if(bRet == true)
    {
        printf("%d Divisible By %d\n",iValue1,iValue2);
    }
    else
    {
        printf("%d Not Divisible By %d\n",iValue1,iValue2);
    }

    return 0;
}