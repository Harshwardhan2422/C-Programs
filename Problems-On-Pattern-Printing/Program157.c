// Input: 5
// output: 1 a 2 b 3 c 4 d 5 e

#include<stdio.h>

void DisplayResult(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    
    for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%d\t%c\t",iCnt,ch);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    DisplayResult(iValue);

    return 0;
}