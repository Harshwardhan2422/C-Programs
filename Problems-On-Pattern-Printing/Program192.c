/*
Enter Number Of Rows : 5
Enter Number Of Columns : 5
*                               *
*       *               *       *
*               *               *
*       *               *       *
*                               *
*/

#include<stdio.h>

void PatternPrinter(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    if(iRow != iCol)
    {
        printf("Invalid Input!");
        return;
    }
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((j == 1) || (j == 5))
            {
                printf("*\t");
            }
            else if(i == j)
            {
                printf("*\t");
            }
            else if((i == 2 && j == 4)||
                    (i == 4 && j == 2))
                    {
                        printf("*\t");
                    }
                    else
                    {
                        printf("\t");
                    }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter Number Of Rows : ");
    scanf("%d",&iValue1);
    printf("Enter Number Of Columns : ");
    scanf("%d",&iValue2);
    
    PatternPrinter(iValue1, iValue2);

    return 0;
}