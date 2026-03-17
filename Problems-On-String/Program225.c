#include<stdio.h>

int AlphabetPosition(char ch)
{
    int iCount = 0;
    
    if(ch >= 'a' && ch <= 'z')
    {
        iCount = ch - 'a' + 1;
    }
    else if(ch >= 'A' && (ch <= 'Z'))
    {
        iCount = ch - 'A' + 1;
    }
    return iCount;
}

int main()
{
    char cvalue = '\0';
    int iRet = 0;
    
    printf("Enter Character : ");
    scanf("%c",&cvalue);
    
    iRet = AlphabetPosition(cvalue);
    
    if(iRet == 0)
    {
        printf("Invalid Input. Please Entered an Alphabet \n");
    }
    else 
    {
        printf("Alphabet Position of %c is : %d\n", cvalue, iRet);
    }
    
    return 0;
}