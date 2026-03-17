#include<stdio.h>

int Count(char *str,char ch)        // case sensitive 
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cvalue = '\0';
    int iRet = 0;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    printf("Enter Character : ");
    scanf(" %c",&cvalue);        // With Space(Show output)
    
    iRet = Count(Arr, cvalue);
    printf("Number Of m : %d\n",iRet);

    return 0;
}