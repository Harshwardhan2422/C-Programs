#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo, int iDiv)
{
    if(iDiv == 0)
    {
        printf("Error: Divisier cannot be zero ! \n");
        return false;
    }
    
    if(iNo % iDiv == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue1);
    printf("Enter Diviser : \n");
    scanf("%d",&iValue2);
    
    bRet = CheckDivisible(iValue1, iValue2);
    
    if(bRet)
    {
        printf("%d is Divisible By : %d\n ",iValue1, iValue2);
    }
    else
    {
        printf("%d is Not Divisible By : %d\n", iValue1,iValue2);
    }
    
    return 0;
}