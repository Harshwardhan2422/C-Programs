#include<stdio.h>

void Descending(char *str, int iSize)
{
    int i = 0, j = 0;
    char temp = '\0';
    
    for(i = 0; i < iSize; i++)
    {
        for(j = i + 1; j < iSize; j++)
        {
            if(str[i] < str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    int iValue = 0, i = 0;
    
    printf("Enter How many Elements : ");
    scanf("%d",&iValue);
    
    char Arr[iValue];
    
    printf("Enter The Elements : \n");
    for(i = 0; i < iValue; i++)
    {
        scanf(" %c",&Arr[i]);
    }
    
    Descending(Arr, iValue);
    
    printf("Descending Order Is : \n");
    for(i = 0; i < iValue; i++)
    {
        printf("%c\n",Arr[i]);
    }

    return 0;
}