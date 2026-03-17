#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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
    scanf("%[^\n]",Arr);
    
    iRet = CountSmall(Arr);
    printf("Count Small Letters is : %d\n", iRet);

    return 0;
}