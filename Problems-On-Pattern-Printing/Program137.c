/*
    Row = 3
    col = 3
    *  *  *
    *  *  *
    *  *  *
*/
#include<stdio.h>

void PatternPrinter()
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= 3; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
    for(iCnt = 1; iCnt <= 3; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
    for(iCnt = 1; iCnt <= 3; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}
int main()
{

    PatternPrinter();

    return 0;
}