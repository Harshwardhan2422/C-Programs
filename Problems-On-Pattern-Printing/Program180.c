/*
   output : 
   
   *    *    *    *    *
   *    *    *    *    *
   H    A    R    S    H    
   *    *    *    *    *
   *    *    *    *    *
*/

#include<stdio.h>

void PatternDisplay(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Arr[] = {'H','A','R','S','H'};
    
    if(iRow != iCol)
    {
        printf("Invalid Input!");
        return;
    }
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 3)
            {
                printf("%c\t",Arr[j - 1]);
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
    int iNo1 = 0, iNo2 = 0;
    
    printf("Enter Number Of Rows : ");
    scanf("%d",&iNo1);
    printf("Enter Number Of Columns : ");
    scanf("%d",&iNo2);
    
    PatternDisplay(iNo1, iNo2);

    return 0;
}