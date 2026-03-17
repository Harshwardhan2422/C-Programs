// Row = 4
// Col = 4
/*
    &    *    *    *
    *    &    *    *
    *    *    &    *
    *    *    *    &
     
*/
#include<stdio.h>

void PatternPrinter(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("&\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter Number Of Rows :");
    scanf("%d",&iValue1);
    printf("Enter Number Of Columns :");
    scanf("%d",&iValue2);
    
    PatternPrinter(iValue1, iValue2);

    return 0;
}