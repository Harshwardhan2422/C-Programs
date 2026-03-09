#include<stdio.h>

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;
    
    printf("Enter First Number : ");
    scanf("%f",&fNo1);
    
    printf("Enter Second Number : ");
    scanf("%f",&fNo2);
    
    fAns = fNo1 + fNo2;
    
    printf("Addition is : %f\n",fAns);
    
    return 0;
}