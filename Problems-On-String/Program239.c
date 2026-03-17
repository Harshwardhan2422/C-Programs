#include<stdio.h>

long long int WordToKeypad(char *str)        // return 64 bit
{
    int i = 0;
    long long int j = 0;        // Use 64 - bit
    
    while(str[i] != '\0')
    {
        int iNo = 0;
        
        if((str[i] >= 'a') && (str[i] <= 'z'))    // Convert To Uppercase 
        {
            str[i] = str[i] - 32;
        }
        
        if((str[i] >= 'A') && (str[i] <= 'Z'))        
        {
            if(str[i] >= 'A' && str[i] <= 'C')
            iNo = 2;
            
            else if(str[i] >= 'D' && str[i] <= 'F')
            iNo = 3;
            
            else if(str[i] >= 'G' && str[i] <= 'I')
            iNo = 4;
            
            else if(str[i] >= 'J' && str[i] <= 'L')
            iNo = 5;
            
            else if(str[i] >= 'M' && str[i] <= 'O')
            iNo = 6;
            
            else if(str[i] >= 'P' && str[i] <= 'S')
            iNo = 7;
            
            else if(str[i] >= 'T' && str[i] <= 'V')
            iNo = 8;
            
            else if(str[i] >= 'W' && str[i] <= 'Z')
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
    long long int iRet = 0;
    
    printf("Enter Word : ");
    scanf("%[^'\n']s",Arr);
    
    iRet = WordToKeypad(Arr);
    
    if(iRet < 1)
    {
        printf("Invalid Input!");
    }
    else
    {
        printf("Keypad Sequence is : %lld\n",iRet);    // printf 64 bit number 
    }

    return 0;
}