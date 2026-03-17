#include<stdio.h>

int Display(char ch)
{
    int iNum = 0;
    
    if(ch >= 'A' && ch <= 'Z')        // For UpperCase 
    {
        if(ch >= 'A' && ch <= 'C')
        iNum = 2;
        
        else if(ch >= 'D' && ch <= 'F')
        iNum = 3;
        
        else if(ch >= 'G' && ch <= 'I')
        iNum = 4;
        
        else if(ch >= 'J' && ch <= 'L')
        iNum = 5;
        
        else if(ch >= 'M' && ch <= 'O')
        iNum = 6;
        
        else if(ch >= 'P' && ch <= 'S')
        iNum = 7;
        
        else if(ch >= 'T' && ch <= 'V')
        iNum = 8;
        
        else if(ch >= 'W' && ch <= 'Z')
        iNum = 9;
        
    }
    return iNum;
}

int main()
{
    char cvalue = '\0';
    int iRet = 0;
    
    printf("Enter Character : ");
    scanf("%c",&cvalue);
    
    iRet = Display(cvalue);
    
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