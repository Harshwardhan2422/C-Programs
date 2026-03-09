#include<stdio.h>

float Addition(float fValue1,float fValue2)
{
    float fAdd = 0.0f;        //Local Variable for Result 
    
    // Updater 
    if(fValue1 < 0.0f)
    {
        fValue1 = -fValue1;
    }
    if(fValue2 < 0.0f)
    {
        fValue2 = - fValue2;
    }
    
    fAdd = fValue1 + fValue2;        // Business Logic 
    
    return fAdd;
}

int main()
{
    float fNo1 = 0.0f,fNo2 = 0.0f,fAns = 0.0f;
    
    printf("Enter First Number : \n");
    scanf("%f",&fNo1);
    
    printf("Enter Second Number : \n");
    scanf("%f",&fNo2);
    
    fAns = Addition(fNo1,fNo2);        // Function Call
    printf("Addition is : %f\n",fAns);

    return 0;
}