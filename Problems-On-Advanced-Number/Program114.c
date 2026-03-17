#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iMax = 0, iCnt = 0;
    
    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }
    
    iMax = Arr[0];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int ilength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : ");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("Size Must Be Greater Than Zero ");
        return -1;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed!\n");
        return -1;
    }
    
    printf("Enter %d Elements : \n", ilength);
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Maximum(ptr, ilength);
    
    if(iRet == -1)
    {
        printf("Invalid Input To Maximum Element");
    }
    else
    {
        printf("Maximum Element is : %d\n",iRet);
    }
    
    free(ptr);
    
    return 0;
}