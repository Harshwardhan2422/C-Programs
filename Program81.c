#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
    int iCnt = 0, iSum = 0;
    
    if(iSize <= 0)
    {
        printf("Invalid Size! Size must be zero \n");
        return 0;
    }
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int ilength = 0,iCnt = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : ");
    scanf("%d",&ilength);
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Please Entered the Values : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Addition(ptr, ilength);
    printf("Addition is : %d\n",iRet);
    
    free(ptr);
    
    return 0;
}