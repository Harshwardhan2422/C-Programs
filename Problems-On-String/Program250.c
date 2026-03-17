#include<stdio.h>

void CountNumber(int *ptr, int iSize)
{
    int iEven = 0, iOdd = 0, iPos = 0, iNeg = 0,izero = 0;
    int i = 0;
    
    for(i = 0; i < iSize; i++)
    {
        if(ptr[i] != 0)
        {
            if(ptr[i] % 2 == 0 )
            iEven++;
        
            else 
                iOdd++;
        
        }
        
        if(ptr[i] > 0 )
            iPos++;
        
        else if(ptr[i] < 0)
            iNeg++;
        
        else
            izero++;    
    }
    
    printf("Even Number : %d\n",iEven);
    printf("Odd Number : %d\n",iOdd);
    printf("Positive Number : %d\n",iPos);
    printf("Negative Number : %d\n",iNeg);
    printf("Zero Number : %d\n", izero);
}

int main()
{
    int iValue = 0, iCnt = 0;
    
    printf("Enter Number Of Elements : ");
    scanf("%d",&iValue);
    
    int Arr[iValue];
    
    printf("Enter The Values : \n");
    
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    CountNumber(Arr, iValue);

    return 0;
}