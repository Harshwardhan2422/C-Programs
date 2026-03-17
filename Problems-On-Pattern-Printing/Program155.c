// Input: 5
// output: A    B    C    D    E

#include<stdio.h>

void DisplayResult(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    
    for(iCnt = 1, ch = 65; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
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