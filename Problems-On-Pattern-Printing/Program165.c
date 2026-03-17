// Row 4 col 4
/*
    *    B    C    D
    A    *    C    D
    A    B    *    D
    A    B    C    *
*/

void PatternPrinter(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A'; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("*\t");
            }
            else
            {
                printf("%c\t",ch);
            }
            ch++;
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