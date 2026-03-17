#include<stdio.h>
#include<stdlib.h>

int DisplayResult(int Arr[], int iSize, int iNo)
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
    int ilength = 0, iCnt = 0, ivalue = 0, iRet = 0;
    int *ptr = NULL;
    
    printf("Enter Number Of Element : ");       
    scanf("%d",&ilength);
    
    if(ilength <= 0)
    {
        printf("Size Must Be Greater than Zero!\n");
        return -1;
    }
    
    ptr = (int *) malloc (ilength * sizeof(int));        //Allocate Dynamic memory 
    
    printf("Please Entered the Values : \n");
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Enter Number you wont to search : \n");
    scanf("%d",&ivalue);
    
    iRet = DisplayResult(ptr, ilength, ivalue);
    printf("Frequency is : %d\n",iRet);
    
    free(ptr);        // Free memory 
    
    return 0;
}