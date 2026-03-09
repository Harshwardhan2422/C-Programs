#include<stdio.h>

int main()
{
    int iNo1 = 20, iNo2 = 10, iAns = 0;
    float fNo1 = 15.9, fNo2 = 9.0,fAns = 0.0f;
    
    iAns = iNo1 + iNo2;
    fAns = fNo1 + fNo2;
    
    printf("Addition of Integers is : %d\n",iAns);
    printf("Addition of Float is : %f\n",fAns);
    
    return 0;
}