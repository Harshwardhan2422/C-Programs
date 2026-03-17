// Input: Aa Bb
// Output: 4

#include<stdio.h>

int Count(char *str)
{
    int iCount = 0, i = 0;
    
    while(str[i] != '\0')
    {
        if((str[i] == 'A') || (str[i] == 'B')||
           (str[i] == 'a') || (str[i] == 'b'))
           {
               iCount++;
           }
           i++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    iRet = Count(Arr);
    printf("Number is : %d\n",iRet);

    return 0;
}