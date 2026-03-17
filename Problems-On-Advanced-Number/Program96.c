#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize,int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;        // element found 
        }
    }
    return false;        // element not found 
}

int main()
{
    int ilength = 0, iCnt = 0, iValue = 0;
    bool bRet = false;
    int *ptr = NULL;
    
    printf("Enter Number of Element : ");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("size must be Greater than zero !");
        return -1;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Please Enter the Values : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Enter Number you wont to Search : \n");
    scanf("%d",&iValue);
    
    bRet = Search(ptr, ilength,iValue);
    
    if(bRet == true)
    {
        printf("Element is present \n");
    }
    else
    {
        printf("Element is not present \n");
    }
    
    free(ptr);
    
    return 0;
}