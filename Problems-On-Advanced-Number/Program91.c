#include<stdio.h>
#include<stdlib.h>

int DisplayResult(int Arr[],int iSize)
{
    int iCnt = 0, iFrequency = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 10)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int ilength = 0,iCnt = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : \n");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("Size Must be Greater than zero : \n");
        return -1;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Please Enter Number Of Element : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = DisplayResult(ptr, ilength);
    printf("Frequently of 10 is : %d\n",iRet);
    
    free(ptr);

    return 0;
}