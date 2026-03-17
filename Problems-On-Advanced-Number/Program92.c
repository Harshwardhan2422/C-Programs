#include<stdio.h>
#include<stdlib.h>

int DisplayResult(int Arr[],int iSize, int iNo)
{
    int iCnt = 0, iFrequency = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int ilength = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : \n");
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("size must be Greater than zero!");
        return -1;
    }
    
    printf("Enter The Frequency : ");
    scanf("%d",&iValue);
    
    ptr = (int *) malloc (ilength * sizeof(int));
    
    printf("Please Enter the Values : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = DisplayResult(ptr, ilength, iValue);
    printf("Frequency is : %d\n",iRet);
    
    free(ptr);
    
    return 0;
}