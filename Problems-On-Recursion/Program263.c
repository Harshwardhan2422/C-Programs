#include<stdio.h>

void Display()
{
    int i = 0;
    i = 1;
    
    while(i <= 4)
    {
        printf("*\t");
        i++;
    }
}

int main()
{
    Display();
    
    return 0;
}