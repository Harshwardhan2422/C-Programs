#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    return(iNo % 5 == 0);    // No Need For Extra Variable 
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    bRet = CheckDivisible(iValue);
    
    if(bRet)
    {
        printf("%d is Divisible By : 5 ",iValue);
    }
    else
    {
        printf("%d is Not Divisible By : 5",iValue);
    }
    
    return 0;
}