#include<stdio.h>
#include<stdlib.h>

int AdditionLess(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iSum = 0;
    
    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid Input!\n");
        return -1;
    }
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iNo)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int iCnt = 0, ilength = 0, iValue = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : ");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("Size Must Be Greater Than Zero!");
        return -1;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return -1;
    }
    
    printf("Enter %d Element : \n", ilength);
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Enter Given Number : ");
    scanf("%d",&iValue);
    
    iRet = AdditionLess(ptr, ilength, iValue);
    printf("Sum Of Number Less Than  %d is : %d\n", iValue,iRet);
    
    free(ptr);
    
    return 0;
}