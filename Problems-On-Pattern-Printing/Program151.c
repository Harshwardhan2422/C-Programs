// Input: 5
// a    b    c    d    e

#include<stdio.h>

void DisplayResult(int iNo)
{
    int iCnt = 0;
    char ch = 'a';
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
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