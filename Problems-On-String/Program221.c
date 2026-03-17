#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[30];
    
    printf("Enter String : ");
    scanf("%[^'\n']s",arr);
    
    strtoggleX(arr);
    printf("String After Updation is : %s\n",arr);
    
    return 0;
}