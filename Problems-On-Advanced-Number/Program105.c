#include<stdio.h>
#include<stdlib.h>

void DisplayLessThan(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iFound = 0;
    
    printf("Element Less than %d Are : \n",iNo);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iNo)
        {
            printf("%d\n",Arr[iCnt]);
            iFound++;
        }
    }
    if(iFound == 0)
    {
        printf("No Element Found less than : %d ",iNo);
    }
}

int main()
{
    int ilength = 0, iCnt = 0, iValue = 0;
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
    
    DisplayLessThan(ptr, ilength,iValue);
    
    free(ptr);
    
    return 0;
}