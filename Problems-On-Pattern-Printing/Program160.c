// Row 4 col 4
/*
    a    a    a    a
    b    b    b    b
    c    c    c    c
    d    d    d    d
*/

#include<stdio.h>

void PatternPrinter(int iRow, int iCol)
{
    int i = 0,j = 0;
    char ch = '\0';
    
    for(i = 1, ch = 'a'; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
        ch++;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter Number Of Rows :");
    scanf("%d",&iValue1);
    printf("Enter Number Of Columns : ");
    scanf("%d",&iValue2);
    
    PatternPrinter(iValue1, iValue2);

    return 0;
}