#include<stdio.h>

void DisplayResult(int iStandard)
{
    switch(iStandard)
    {
        case 8:
            printf("Your Exam At 8am \n ");
            break;
            
        case 9:
            printf("Your Exam At 9am \n ");  
            break;
            
        case 10:
            printf("Your Exam At 10am \n ");  
            break;
            
        case 11:
            printf("Your Exam At 11am \n"); 
            break;    
            
        case 12:
            printf("Your Exam At 12am \n");
            break;
            
        default:
            printf("Sorry we don't have the information about your Standard \n ");      
            break;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Your Standard : ");
    scanf("%d",&iValue);
    
    DisplayResult(iValue);

    return 0;
}