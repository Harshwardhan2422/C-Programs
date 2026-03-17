#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt = 0;
    
    while(iNo >= 1)
    {
        printf("%d\n",iNo);
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter The Frequency : ");
    scanf("%d",&iValue);
    
    DisplayI(iValue);

    return 0;
}