// iRow : 4 iCol : 4
/*
    *    *    *    *
    &    &    &    &
    &    &    &    &
    *    *    *    *
*/

#include<stdio.h>

void PatternPrinter(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    if(iRow != iCol)        // Filter 
    {
        printf("Invalid Input!");
        return;
    }
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) || (i == 4))    // First And Last Rows
            {
                printf("*\t");
            }
            else
            {
                printf("&\t");        // Between Rows
            }
        }
        printf("\n");
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;
    
    printf("Enter Number Of Rows : ");
    scanf("%d",&iNo1);
    printf("Enter Number Of Columns : ");
    scanf("%d",&iNo2);
    
    PatternPrinter(iNo1, iNo2);

    return 0;
}