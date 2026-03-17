#include<stdio.h>

void Ascending(char *str, int cRet)
{
    int i = 0, j = 0;
    char temp = 0;
    
        
    for(i = 0; i < cRet; i++)
    {
        for(j = i + 1; j < cRet; j++)
        {
            if(str[i] > str[j])
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
    int ivalue = 0;
    int i = 0;
    
    printf("Enter How many Characters : ");
    scanf("%d",&ivalue);
    
    char Arr[ivalue];
    
    printf("Enter Character : \n");
    for(i = 0; i < ivalue; i++)
    {
        scanf(" %c",&Arr[i]);
    }
    
    Ascending(Arr, ivalue);
    
    printf("Ascending Order Is : \n");
    for(i = 0; i < ivalue; i++)
    {
        printf("%c\n",Arr[i]);
    }

    return 0;
}