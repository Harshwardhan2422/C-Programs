#include<stdio.h>

int Display(int *ptr, int iNo)
{
    int iCnt = 0, iSum = 0;
    
    if(ptr == NULL)        // Filter For NULL pointer 
    {
        return 0;
    }
    
    if(iNo <= 0)        // Filter For Invalid Size
    {
        printf("Invalid Size!\n");
        return 0;
    }
    
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        iSum = iSum + *ptr;
        ptr++;
    }
    return iSum;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    
    
    printf("Enter Number : \n");
    scanf("%d",&iSize);
    
    int Arr[iSize];
    
    printf("Values From Array Are : \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    iRet = Display(Arr,iSize);
    printf("Addition is : %d\n",iRet);
    
    return 0;
}