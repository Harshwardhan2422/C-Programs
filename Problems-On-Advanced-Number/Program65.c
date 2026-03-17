#include<stdio.h>

void Display()
{
    int Arr[5];
    int iCnt = 0;
    
    printf("Please Entered the Values : \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    printf("Values from Array Are : \n");
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
}

int main()
{
    
    Display();
    
    return 0;
}