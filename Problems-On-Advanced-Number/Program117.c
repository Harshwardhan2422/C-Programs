#include<stdio.h>
#include<stdlib.h>

int CountGreater(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
    
    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid Input!\n");
        return -1;
    }
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iNo)
        {
            iCount++;
        }
    }
    return iCount;
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
    
    iRet = CountGreater(ptr, ilength, iValue);
    
    if(iRet > 0)
    {
        printf("Count Of Number Greater Than %d : %d\n", iValue,iRet);
    }
    else
    {
        printf("No Numbers are  Greater than %d\n", iValue);
    }
    
    free(ptr);
    
    return 0;
}