#include<stdio.h>
#include<stdlib.h>

void AdditionEvenOdd(int Arr[], int iSize)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    printf("Addition Of Even Elements Are : %d\n",iSumEven);
    printf("Addition Of Odd Elements Are : %d\n",iSumOdd);
}

int main()
{
    int ilength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : \n");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("Invalid Input! Input must be Greater than zero \n");
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
    
    AdditionEvenOdd(ptr, ilength);
    
    free(ptr);
    
    return 0;
}