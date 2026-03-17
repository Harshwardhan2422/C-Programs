#include<stdio.h>

int Addition(int Arr[],int iSize)
{
    int iCnt = 0,iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int ilength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter Number of Element : \n");
    scanf("%d",&ilength);
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Addition(ptr,ilength);
    printf("Addition Of Array Are : %d\n",iRet);
    
    free(ptr);
    
    return 0;
}