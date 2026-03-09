#include<stdio.h>

int AdditionInt(int ivalue1,int ivalue2)
{
    int iAdd = 0;
    
    if(ivalue1 < 0)
    {
        ivalue1 = -ivalue1;
    }
    if(ivalue2 < 0)
    {
        ivalue2 = -ivalue2;
    }
    
    iAdd = ivalue1 + ivalue2;
    return iAdd;
}

float AdditionFloat(float fValue1, float fValue2)
{
    float fAdd = 0.0f;
    
    if(fValue1 < 0)
    {
        fValue1 = -fValue1;
    }
    if(fValue2 < 0)
    {
        fValue2 = -fValue2;
    }
    
    fAdd = fValue1 + fValue2;
    return fAdd;
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;
    float fNo1 = 0.0f, fNo2 = 0.0f,fAns = 0.0f;
    
    printf("Enter First Number : \n");
    scanf("%d",&iNo1);
    
    printf("Enter Second Number : \n");
    scanf("%d",&iNo2);
    
    iAns = AdditionInt(iNo1,iNo2);
    printf("Addition of Integers is : %d\n",iAns);
    
    printf("\n×=×=×=×=×=×=×=×=×=×=×=×=×=×=×=×=×=×=×=\n");
    
    printf("\nEnter First Number : \n");
    scanf("%f",&fNo1);
    
    printf("Enter Second Number : \n");
    scanf("%f",&fNo2);
    
    fAns = AdditionFloat(fNo1,fNo2);
    printf("Addition of Floats is : %f\n",fAns);
    
    return 0;
}