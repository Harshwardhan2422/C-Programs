#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;
    
    if(Arr == NULL  ||  iSize <= 0)
    {
        return -1;
    }
    
    iMin = Arr[iCnt];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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
        printf("Memory Allocation Failed : \n");
        return -1;
    }
    
    printf("Enter %d Elements : \n", ilength);
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Minimum(ptr, ilength);
    
    if(iRet == -1)
    {
        printf("Error : Invalid Input To Minimum Function \n");
    }
    else
    {
        printf("Minimum Element is : %d\n",iRet);
    }
    
    free(ptr);
    
    return 0;
}