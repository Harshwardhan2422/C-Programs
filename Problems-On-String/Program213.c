
#include<stdio.h>

int Count(char *str)
{
    int iCount = 0;
    char *temp = str;
    
    while(*temp != '\0')
    {
        if(*temp == 'm')
        {
            iCount++;
        }
        temp++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    iRet = Count(Arr);
    printf("Number Of m : %d\n",iRet);

    return 0;
}