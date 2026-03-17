// Output 
/*             
      $    #    *    #    #
      #    $    *    #    #
      *    *    *    *    *
      #    #    *    $    #
      #    #    *    #    $
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
            if((i == 3 && i <= 5) || (j == 3 && j <= 5))
            {
                printf("*\t");
            }
            else if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iNo1 = 0, iNo2 = 0;
    
    printf("Enter Number Of Rows :");
    scanf("%d",&iNo1);
    printf("Enter Number Of Columns : ");
    scanf("%d",&iNo2);
    
    PatternDisplay(iNo1,iNo2);

    return 0;
}