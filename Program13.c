#include<stdio.h>

float CircleArea(float fRadius)
{
    float fArea = 0.0f;
    
    if(fRadius < 0.0f)        // Filter 
    {
        fRadius = -fRadius;
    }
    
    fArea = 3.14 * fRadius * fRadius;
    return fArea;
    
}
int main()
{
    float fValue = 0.0f, fResult = 0.0f;
    
    printf("Enter Radius of Circle : \n");
    scanf("%f",&fValue);
    
    fResult = CircleArea(fValue);
    printf("Area of circle is : %f\n",fResult);
    
    return 0;
}