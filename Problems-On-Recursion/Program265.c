#include<stdio.h>

void DisplayR()
{
    int i = 0;
    
    for(i = 1; i <= 4; i++)
    {
        printf("*\t");
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}