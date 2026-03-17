#include<stdio.h>

int ReverseValues(int *str, int isize)
{
    if((str == NULL) || (isize <= 0))
    {
        return -1;        // Error Condition 
    }
    
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
    return 0;
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
    
    if (ReverseValues(Arr, iValue) == 0)
    {
        printf("Reverse Values Are : \n");
        for(iCnt = 0; iCnt < iValue; iCnt++)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
    else
    {
        printf("Error : would not Reverse Values. \n");
    }
    

    return 0;
}