#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    
    return (float) iSum / iSize;
}

int main()
{
    int *ptr = NULL;
    int ilength = 0, iCnt = 0;
    float fRet = 0.0f;
    
    // step 1 : Accept Number Of Element 
    printf("Enter Number Of Element : \n");
    scanf("%d",&ilength);
    
    if(ilength <= 0)        // Filter
    {
        printf("Invalid Size ! Size must be Greater than zero \n");
        return -1;
    }
    
    // step 2 : Allocate Memory Dynamically 
    ptr = (int *) malloc (ilength * sizeof(int));
    
    // step 3 : Accept Values And Store in Dynamic memory 
    printf("Please Enter %d Values : \n", ilength);
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    // step 4 : Perform Operation (Logic)
    fRet = Average (ptr, ilength);
    printf("Average Is : %f\n",fRet);
    
    // step 5 : Deallocate that Memory 
    free(ptr);

    return 0;
}