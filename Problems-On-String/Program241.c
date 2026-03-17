#include<stdio.h>

void ReverseString(char *str)
{
    int iStart = 0, iEnd = 0;
    char temp = '\0';
    
    while(str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--;
    
    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;
        
        iStart++;
        iEnd--;
    }
}

int main()
{
    char Arr[30];
    
    printf("Enter Word : ");
    scanf("%[^'\n']s",Arr);
    
    ReverseString(Arr);
    
    printf("Reverse String is : %s\n",Arr);

    return 0;
}