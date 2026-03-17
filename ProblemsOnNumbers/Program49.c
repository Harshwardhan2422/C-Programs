#include<stdio.h>
#include<stdbool.h>

int main()
{
    int iNo = 8;
    
    printf("Factors of 8 Are : \n");
    
    if(iNo % 1 == 0)
    {
        printf("1 ");
    }
    if(iNo % 2 == 0)
    {
        printf("2 ");
    }
    if(iNo % 3 == 0)
    {
        printf("3 ");
    }
    if(iNo % 4 == 0)
    {
        printf("4 ");
    }
    if(iNo % 5 == 0)
    {
        printf("5 ");
    }
    if(iNo % 6 == 0)
    {
        printf("6 ");
    }
    if(iNo % 7 == 0)
    {
        printf("7 ");
    }
    
    return 0;
}