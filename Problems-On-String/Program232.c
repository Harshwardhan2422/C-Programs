#include<stdio.h>

int ToLowerX(char ch)
{
    int iNo = 0;
    
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;        // Convert In LowerCase 
    }
    if((ch >= 'a') && (ch <= 'z'))        // For LowerCase 
    {
        if(ch >= 'a' && ch <= 'c')
        iNo = 2;
        
        else if(ch >= 'd' && ch <= 'f')
        iNo = 3;
        
        else if(ch >= 'g' && ch <= 'i')
        iNo = 4;
        
        else if(ch >= 'j' && ch <= 'l')
        iNo = 5;
        
        else if(ch >= 'm' && ch <= 'o')
        iNo = 6;
        
        else if(ch >= 'p' && ch <= 's')
        iNo = 7;
        
        else if(ch >= 't' && ch <= 'v')
        iNo = 8;
        
        else if(ch >= 'w' && ch <= 'z')
        iNo = 9;
    }
    return iNo;
}

int main()
{
    char cvalue = '\0';
    int iRet = 0;
    
    printf("Enter Character : ");
    scanf("%c",&cvalue);

    iRet = ToLowerX(cvalue);
    
    if(iRet < 1)
    {
        printf("Invalid Input!");
    }
    else
    {
        printf("Keypad Number is : %d\n",iRet);
    }

    return 0;
}