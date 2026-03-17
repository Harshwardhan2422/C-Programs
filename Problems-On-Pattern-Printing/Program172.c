// Row : 4 Col : 4
/*
    @    *    *    *
         @    *    *
              @    *
                   @
*/

#include<stdio.h>

void PatternDisplay(int iRow, int iCol)
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
            if(j == i)
            {
                printf("@\t");
            }
            else if(j >= i)
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
    int iValue1 = 0,iValue2 = 0;
    
    printf("Enter Number Of Rows : ");
    scanf("%d",&iValue1);
    printf("Enter Number Of Columns : ");
    scanf("%d",&iValue2);
    
    PatternDisplay(iValue1, iValue2);

    return 0;
}