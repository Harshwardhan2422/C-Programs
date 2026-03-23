#include<stdio.h>
#include<stdlib.h>

struct Matrix
{
    int **Arr;
    int iRow, iCol;
};

void MatrixI(struct Matrix *ptr, int iRow, int iCol)
{
    int i = 0;
    
    ptr -> iRow = iRow;
    ptr -> iCol = iCol;
    
    ptr -> Arr = (int **) malloc (iRow * sizeof(int*));
    
    for(i = 0; i < iRow; i++)
    {
        ptr -> Arr[i] = (int *) malloc (iCol * sizeof(int));
    }
}

void Accept(struct Matrix *ptr)
{
    int i = 0, j = 0;
    
    printf("Please Enter The Values : \n");
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            scanf("%d",&ptr -> Arr[i][j]);
        }
    }
}

void Display(struct Matrix *ptr)
{
    int i = 0, j = 0;
    
    printf("Elements Of Matrix Are : \n");
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            printf("%d\t",ptr -> Arr[i][j]);
        }
        printf("\n");
    }
}

int Summation(struct Matrix *ptr)
{
    int i = 0, j = 0, iSum = 0;
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            iSum = iSum + ptr -> Arr[i][j];
        }
    }
    return iSum;
}

int main()
{
    int iRow = 0, iCol = 0, iRet = 0;
    struct Matrix mobj;
    
    printf("Please Enter Number Of Rows : \n");
    scanf("%d",&iRow);
    
    printf("Please Enter Number Of Column : \n");
    scanf("%d",&iCol);
    
    MatrixI(&mobj, iRow,iCol);
    
    Accept(&mobj);
    Display(&mobj);
    
    iRet = Summation(&mobj);
    printf("Summation Of Matrix is : %d", iRet);
    
    return 0;
}