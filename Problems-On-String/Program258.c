#include<stdio.h>
#include<stdlib.h>

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
    char *ptr = NULL;
    
    printf("Enter How many Elements : ");
    scanf("%d",&iValue);
    
    ptr = (char *) malloc (iValue * sizeof(char));
    
    printf("Enter The Elements : \n");
    for(i = 0; i < iValue; i++)
    {
        scanf(" %c",&ptr[i]);
    }
    
    Descending(ptr, iValue);
    
    printf("Descending Order Is : \n");
    for(i = 0; i < iValue; i++)
    {
        printf("%c\n",ptr[i]);
    }
    
    free(ptr);

    return 0;
}