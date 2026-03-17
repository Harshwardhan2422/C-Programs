// Row 4 col 4
/*
    A    B    C    D
    A    B    C    D
    A    B    C    D
    A    B    C    D
*/

void PatternPrinter(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A'; j <= iCol; j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter Number Of Rows : ");
    scanf("%d",&iValue1);
    printf("Enter Number Of Columns : ");
    scanf("%d",&iValue2);
    
    PatternPrinter(iValue1,iValue2);

    return 0;
}