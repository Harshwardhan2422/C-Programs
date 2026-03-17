#include<stdio.h>
#include<stdbool.h>

int main()
{
    int iValue = 25;
    bool bRet = false;
    
    if(bRet = iValue % 5)
    {
        printf("Division By %d \n",iValue);
    }
    else
    {
        printf("Not Divisible %d \n",iValue);
    }

    return 0;
}
