#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int iSize)
{
    int iCnt = 0; int iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int ilength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : \n");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("Invalid Size! Size must be Greater than zero \n");
        return -1;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed \n");
        return -1;
    }
    
    printf("Please Entered the Values : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = CountOdd(ptr, ilength);
    printf("Total Number Of Odd Elements Are : %d\n",iRet);
    
    free(ptr);

    return 0;
}