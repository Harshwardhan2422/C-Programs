#include<stdio.h>

char NumToAlpha(int iNo)
{
    char ch = '\0';
    
    if(iNo >= 1 && iNo <= 26)
    {
        ch = 'a' + iNo - 1;
    }
    return ch;

}
int main()
{
    int iValue = 0;
    char cRet = '\0';
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    cRet = NumToAlpha(iValue);
    
    if(cRet == '\0')
    {
        printf("Invalid Input \n");
    }
    else
    {
        printf("Number %d Corresponding Alphabet is : %c\n",iValue, cRet);
    }

    return 0;
}