#include<stdio.h>
#include<stdbool.h>

int main()
{
    int iNo = 0, iCnt = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iNo);
    
    printf("Factors Of %d Are : \n",iNo);
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
    
    return 0;
}