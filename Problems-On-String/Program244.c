#include<stdio.h>

void ReverseValues(int *str, int isize)
{
    int iStart = 0, iEnd = isize - 1;
    int temp = 0;
    
    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;
        
        iStart++;
        iEnd--;
    }
}

int main()
{
    int iValue = 0, iCnt = 0;
    
    printf("Enter How Many Elements : ");
    scanf("%d",&iValue);
    
    int Arr[iValue];
    
    printf("Enter values : \n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    ReverseValues(Arr, iValue);
    
    printf("Reverse Values Are : \n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}