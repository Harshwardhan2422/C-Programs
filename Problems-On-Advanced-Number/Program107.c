#include<stdio.h>
#include<stdlib.h>

int CountLess(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int ilength = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : \n");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("Size Must Be Greater Than Zero \n");
        return -1;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Please Enter the Values : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Enter Number To Compare : \n");
    scanf("%d",&iValue);
    
    iRet = CountLess(ptr, ilength, iValue);
    printf("Number Of Element Less Than %d Are : %d\n",iValue,iRet);
    
    free(ptr);
    
    return 0;
}