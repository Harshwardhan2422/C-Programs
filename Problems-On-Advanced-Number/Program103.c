#include<stdio.h>
#include<stdlib.h>

void DisplayGreaterThan(int Arr[], int iSize)
{
    int iCnt = 0;
    
    printf("Element Greater than 10 Are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= 10)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int ilength = 0, iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : ");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("Invalid Size! Size must be Greater than zero \n");
        return -1;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Please Enter the Values : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    DisplayGreaterThan(ptr, ilength);
    
    free(ptr);
    
    return 0;
}