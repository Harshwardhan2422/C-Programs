#include<stdio.h>

void DispalyR(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\n",iNo);
        iNo--;
        DispalyR(iNo);
    }
    printf("End Of DispalyR \n");
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