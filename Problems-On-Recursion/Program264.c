#include<stdio.h>

void DisplayR()
{
    int i = 0;
    i = 1;
    
    while(i <= 4)
    {
        printf("*\t");
        i++;
        DisplayR();
    }
}
int main()
{
    DisplayR();

    return 0;
}