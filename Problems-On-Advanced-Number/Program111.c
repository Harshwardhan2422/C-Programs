#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0, iMax = 0;
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
        printf("Invalid Size! Size must be Greater than zero");
        return 1;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Please Enter the Values : \n");
    {
        for(iCnt = 0; iCnt < ilength; iCnt++)
        {
            scanf("%d",&ptr[iCnt]);
        }
    }
    
    iRet = Maximum(ptr,ilength);
    printf("Maximum Number is : %d\n",iRet);
    
    free(ptr);
    
    return 0;
}