#include<stdio.h>
#include<stdbool.h>

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    if(bRet == iValue % 5)        // Check Divisible 
    {
        printf("%d is Divisible By 5 \n",iValue);
    }
    else
    {
        printf("%d is Not Divisible By 5 \n",iValue);
    }

    return 0;
}