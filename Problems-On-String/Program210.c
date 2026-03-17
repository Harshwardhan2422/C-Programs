#include<stdio.h>

int CountDigit(char *ptr)
{
    int iCount = 0;
    
    while(*ptr !='\0')
    {
        if((*ptr >= '0') && (*ptr <= '9'))
        {
            iCount++;
        }
        ptr++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountDigit(Arr);
    printf("Count Of Digits is : %d\n",iRet);

    return 0;
}