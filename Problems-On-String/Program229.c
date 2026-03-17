#include<stdio.h>

char NumToAlpha(int iNo, int iCase)
{
    char ch = '\0';
    
    if((iNo >= 1) && (iNo <= 26) && ((iCase == 1) || (iCase == 2)))
    {
        if(iCase == 1)
        {
            ch = 'A' + iNo - 1;        // UpperCase 
        }
        else
        {
            ch = 'a' + iNo - 1;        // Lowercase 
        }
    }
    return ch;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    char cRet = '\0';
    
    printf("Enter Number (1 To 26): ");
    scanf("%d",&iValue1);
    
    printf("Please Enter Case (1 For UpperCase , 2 For LowerCase) \n");
    scanf("%d",&iValue2);

    cRet = NumToAlpha(iValue1, iValue2);
    
    if(cRet == '\0')
    {
        printf("Invalid Input \n");
    }
    else
    {
        printf("Number %d Corresponding Alphabet is : %c\n",iValue1, cRet);
    }
    
    return 0;
}