#include<stdio.h>

long long int WordToKeypad(char *str)        // return 64 bit
{
    int i = 0;
    long long int j = 0;        // Use 64 - bit
    
    while(str[i] != '\0')
    {
        if((str[i] >= 'a') && (str[i] <= 'z'))    // Convert To Uppercase 
        {
            str[i] = str[i] - 32;
        }
        
        if((str[i] >= 'A') && (str[i] <= 'Z'))        
        {
            if(str[i] <= 'C')
            j = j * 10 + 2;
            
            else if(str[i] <= 'F')
            j = j * 10 + 3;
            
            else if(str[i] <= 'I')
            j = j * 10 + 4;
            
            else if(str[i] <= 'L')
            j = j * 10 + 5;
            
            else if(str[i] <= 'O')
            j = j * 10 + 6;
            
            else if(str[i] <= 'S')
            j = j * 10 + 7;
            
            else if(str[i] <= 'V')
            j = j * 10 + 8;
            
            else if(str[i] <= 'Z')
            j = j * 10 + 9;
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