#include<stdio.h>

int Count(char *str,char ch)
{
    int iCount = 0;
    char *temp = str;
    
    while(*temp != '\0')
    {
        if(*temp == ch)
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
    char ch = '\0';
    int iRet = 0;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    iRet = Count(Arr, 'm');
    printf("Number Of m : %d\n",iRet);

    return 0;
}