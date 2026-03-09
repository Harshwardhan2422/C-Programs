#include<stdio.h>

void DisplayResult(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    
    while(iCnt <= iNo)
    {
        printf("\nNever Give Up\n");
        iCnt++;
    }
}

int main()
{
    int iFrequency = 0;
    
    printf("Enter The Frequency : \n");
    scanf("%d",&iFrequency);
    
    DisplayResult(iFrequency);
    
    return 0;
}