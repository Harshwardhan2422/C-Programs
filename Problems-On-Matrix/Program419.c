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

int CountEven(struct Matrix *ptr)
{
    int i = 0, j = 0, iCount = 0;
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            if(ptr -> Arr[i][j] % 2 == 0)
            {
                iCount++;
            }
        }
    }
    return iCount;
}

int SumEven(struct Matrix *ptr)
{
    int i = 0, j = 0, iSum = 0;
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            if(ptr -> Arr[i][j] % 2 == 0)
            {
                iSum = iSum + ptr -> Arr[i][j];
            }
        }
    }
    return iSum;
}

void DigitCount(struct Matrix *ptr)
{
    int i = 0, j = 0, iCount = 0, iNo = 0;
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            iNo = ptr -> Arr[i][j];
            iCount = 0;
            
            while(iNo != 0)
            {
                iNo = iNo / 10;
                iCount++;
            }
            printf("Digit Count of : %d is : %d\n",ptr -> Arr[i][j], iCount);
        }
    }
}

void SumDigits(struct Matrix *ptr)
{
    int i = 0, j = 0, iSum = 0, iNo = 0, iDigit = 0;
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            iNo = ptr -> Arr[i][j];
            iSum = 0;
            
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }
            printf("Sum Of Digits Of : %d is : %d\n",ptr -> Arr[i][j],iSum);
        }
    }
}

int Maximum(struct Matrix *ptr)
{
    int i = 0, j = 0;
    int iMax = ptr -> Arr[i][j];
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            if(ptr -> Arr[i][j] > iMax)
            {
                iMax = ptr -> Arr[i][j];
            }
        }
    }
    return iMax;
}

int Minimum(struct Matrix *ptr)
{
    int i = 0, j = 0;
    int iMin = ptr -> Arr[i][j];
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            if(ptr -> Arr[i][j] < iMin)
            {
                iMin = ptr -> Arr[i][j];
            }
        }
    }
    return iMin;
}

void UpdateOdd(struct Matrix *ptr)
{
    int i = 0, j = 0;
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            if(ptr -> Arr[i][j] % 2 != 0)
            {
                ptr -> Arr[i][j]++;
            }
        }
    }
}

void MaxRow(struct Matrix *ptr)
{
    int i = 0, j = 0, iMax = 0;
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        iMax = ptr -> Arr[i][0];
        
        for(j = 0; j < ptr -> iCol; j++)
        {
            if(ptr -> Arr[i][j] > iMax)
            {
                iMax = ptr -> Arr[i][j];
            }
        }
        printf("Maximum Element of Row : %d is : %d\n",i, iMax);
    }
}

void MinRow(struct Matrix *ptr)
{
    int i = 0, j = 0, iMax = 0;
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        iMax = ptr -> Arr[i][0];
        
        for(j = 0; j < ptr -> iCol; j++)
        {
            if(ptr -> Arr[i][j] < iMax)
            {
                iMax = ptr -> Arr[i][j];
            }
        }
        printf("Minimum Element of Row : %d is : %d\n",i, iMax);
    }
}

int SumOfDiagonal(struct Matrix *ptr)
{
    int i = 0, j = 0, iSum = 0;
    
    if(ptr -> iRow != ptr -> iCol)
    {
        printf("Unable To Perform Addition of Diagonal\n");
        return -1;
    }
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            if(i == j)
            {
                iSum = iSum + ptr -> Arr[i][j];
            }
        }
    }
    return iSum;
}

int BorderAdd(struct Matrix *ptr)
{
    int i = 0, j = 0, iSum = 0;
    
    for(i = 0; i < ptr -> iRow; i++)
    {
        for(j = 0; j < ptr -> iCol; j++)
        {
            if(i == 0 ||i == ptr -> iRow - 1 || j == 0 || j == ptr -> iCol - 1)
            {
                iSum = iSum + ptr -> Arr[i][j];
            }
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
    
    MatrixI(&mobj,iRow,iCol);
    
    Accept(&mobj);
    Display(&mobj);
    
    iRet = BorderAdd(&mobj);
    printf("Addition of Border Elements is : %d",iRet);
    
    return 0;
}