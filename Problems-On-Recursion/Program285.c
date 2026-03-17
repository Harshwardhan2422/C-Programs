#include<stdio.h>

int CountCaptal(char *str)
{
    static int iCount = 0;
    
    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
        CountCaptal(str);
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountCaptal(Arr);
    printf("Capital Count  is : %d\n", iRet);

    return 0;
}