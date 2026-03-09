#include<stdio.h>

void DisplayResult(int iStandard)
{
    if(iStandard <= 0)
    {
        iStandard = - iStandard;        // Updator 
    }
    
    switch(iStandard)
    {
        case 8:
        case 9:
            printf("Your Exam At 9am \n");
            break;
            
        case 10:
        case 11:
            printf("Your Exam At 11am \n");    
            break;
            
        case 12:
            printf("Your Exam At 1pm \n");    
            break;
            
        default:
            printf("Sorry! We don't have information about your Standard \n");   
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Your Standard : \n");
    scanf("%d",&iValue);
    
    DisplayResult(iValue);
    
    return 0;
}