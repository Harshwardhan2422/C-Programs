#include<stdio.h>

int CountCaptial(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountCaptial(Arr);
    printf("Capital Count  is : %d\n", iRet);

    return 0;
}