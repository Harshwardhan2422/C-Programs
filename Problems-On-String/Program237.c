#include<stdio.h>

int WordToKeypad(char *str)
{
    int i = 0, j = 0;
    
    while(str[i] != '\0')
    {
        int iNo = 0;
        
        if((str[i] >= 'A') && (str[i] <= 'Z'))    // Convert To Lowercase 
        {
            str[i] = str[i] + 32;
        }
        
        if((str[i] >= 'a') && (str[i] <= 'z'))        // Lowercase 
        {
            if(str[i] >= 'a' && str[i] <= 'c')
            iNo = 2;
            
            else if(str[i] >= 'd' && str[i] <= 'f')
            iNo = 3;
            
            else if(str[i] >= 'g' && str[i] <= 'i')
            iNo = 4;
            
            else if(str[i] >= 'j' && str[i] <= 'l')
            iNo = 5;
            
            else if(str[i] >= 'm' && str[i] <= 'o')
            iNo = 6;
            
            else if(str[i] >= 'p' && str[i] <= 's')
            iNo = 7;
            
            else if(str[i] >= 't' && str[i] <= 'v')
            iNo = 8;
            
            else if(str[i] >= 'w' && str[i] <= 'z')
            iNo = 9;
            
            j = j * 10 + iNo;
        }
        i++;
    }
    return j;
}

int main()
{
    char Arr[50];
    int iRet = 0;
    
    printf("Enter Word : ");
    scanf("%[^'\n']s",Arr);
    
    iRet = WordToKeypad(Arr);
    
    if(iRet < 1)
    {
        printf("Invalid Input!");
    }
    else
    {
        printf("Keypad Sequence is : %d\n",iRet);
    }

    return 0;
}