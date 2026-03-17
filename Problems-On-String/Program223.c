#include<stdio.h>

int Count(char ch)
{
    int iCount = 0;
    
    if((ch >= 'a') && (ch <= 'z'))
    {
        iCount = ch - 'a' + 1;
    }
    return iCount;
}

int main()
{
    char cvalue = '\0';
    int iRet = 0;
    
    printf("Enter Character : \n");
    scanf("%c",&cvalue);
    
    iRet = Count(cvalue);
    
    if(iRet == 0)
    {
        printf("Invalid Input please Entered an Alphabet \n");
    }
    else
    {
        printf("Alphabet Position of %c is : %d\n", cvalue, iRet);
    }
    
    return 0;
}