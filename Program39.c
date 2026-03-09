#include<stdio.h>

int main()
{
    int iFrequency = 0, iCnt = 0;
    
    printf("Enter The Frequency : \n");
    scanf("%d",&iFrequency);
    
    for(iCnt = iFrequency; iCnt >= 0; iCnt--)
    {
        printf("\n%d\n",iCnt);
    }
    
    return 0;
}