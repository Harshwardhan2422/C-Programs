#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int Arr[], int iSize)
{
    int iCnt = 0, iFlag = 0;
    
    printf("Odd Elements from Array Are : ");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 1)
        {
            printf("%d ",Arr[iCnt]);
            iFlag = 1;
        }
    }
    if(iFlag == 0)
    {
        printf("None");
    }
}

int main()
{
    int ilength = 0, iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : \n");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("Invalid Size! Size must be Greater than zero \n");
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
    
    DisplayOdd(ptr, ilength);
    
    free(ptr);

    return 0;
}