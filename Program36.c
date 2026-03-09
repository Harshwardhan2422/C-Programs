#include<stdio.h>

int main()
{
    int iFrequency = 0, iCnt = 0;
    iCnt = 1;
    
    printf("Enter The Frequency : \n");
    scanf("%d",&iFrequency);
    
    while(iCnt <= iFrequency)
    {
        printf("\nGood Morning...!\n");
        iCnt++;
    }
    
    return 0;
}