#include<stdio.h>

void DispalyR(int iNo)
{
    static int iCnt = 1;
    
    if(iCnt <= iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
        DispalyR(iNo);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter The Frequency : ");
    scanf("%d",&iValue);

    DispalyR(iValue);
    printf("End Of Main \n");
    
    return 0;
}