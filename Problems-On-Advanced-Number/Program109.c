#include<stdio.h>
#include<stdlib.h>

int AdditionLess(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iNo)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int AdditionGreater(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iNo)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int ilength = 0, iCnt = 0, iValue = 0, iLess = 0,igreater = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : \n");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("Invalid Size! Size must be Greater than zero \n");
        return 0;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Please Enter the Values : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Enter Number To Compare : \n");
    scanf("%d",&iValue);
    
    iLess = AdditionLess(ptr, ilength, iValue);
    printf("Addition Of Less Element Are : %d\n",iLess);
    
    igreater = AdditionGreater(ptr, ilength, iValue);
    printf("Addition Of Greater Element Are : %d\n", igreater);
    
    free(ptr);

    return 0;
}