#include<stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;
    float fNo1 = 0.0f, fNo2 = 0.0f,fAns = 0.0f;
    
    printf("Enter First Number : \n");
    scanf("%d",&iNo1);
    scanf("%f",&fNo1);
    
    printf("Enter Second Number : \n");
    scanf("%d",&iNo2);
    scanf("%f",&fNo2);
    
    iAns = iNo1 + iNo2;
    fAns = fNo1 + fNo2;
    
    printf("Addition of Integers is : %d\n",iAns);
    printf("Addition of Float is : %f\n",fAns);
    
    return 0;
}