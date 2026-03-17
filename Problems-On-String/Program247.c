#include<stdio.h>

int CountCharTypes(char *str)
{    
    int i = 0, iUpper = 0, iLower = 0, iDigit = 0, iOther = 0;
    
    while(str[i] != '\0')
    {
        if((str[i] >= 'a') && (str[i] <= 'z'))
        {
            iLower++;
        }
        else if((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            iUpper++;
        }
        else if((str[i] >= '0') && (str[i] <= '9'))
        {
            iDigit++;
        }
        else 
        {
            iOther++;
        }
        i++;
    }
    
    printf("UpperCase Is : %d\n",iUpper);
    printf("Lowercase is : %d\n",iLower);
    printf("Digits is : %d\n",iDigit);
    printf("Others is : %d\n",iOther);
}

int main()
{
    char Arr[30];
    int iRet = 0;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    CountCharTypes(Arr);
    
    return 0;
}