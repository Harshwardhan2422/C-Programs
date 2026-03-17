#include<stdio.h>

void Display(char str[])
{
    int i = 0;
    printf("Entered String is : \n");
    
    for(i = 0; i < str[i]; i++)
    {
        printf("%c\n",str[i]);
    }
}

int main()
{
    char Arr[30];
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    Display(Arr);

    return 0;
}