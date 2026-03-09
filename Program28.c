#include<stdio.h>

int main()
{
    int iFrequency = 0, iCnt = 0;
    
    printf("Enter The Frequency : \n");
    scanf("%d",&iFrequency);
    
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Hello World...!\n");
    }
    
    return 0;
}