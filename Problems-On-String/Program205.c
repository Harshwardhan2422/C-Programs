#include<stdio.h>

int CountLarge(char *ptr)
{
    int iCount = 0;
    
    while(*ptr != '\0')
    {
        if((*ptr >= 65) && (*ptr <= 90))
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
    
    iRet = CountLarge(Arr);
    printf("Count Of Large Letter is : %d\n",iRet);

    return 0;
}