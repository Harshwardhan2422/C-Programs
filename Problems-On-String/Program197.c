#include<stdio.h>

int main()
{
    char Arr[30];
    
    printf("Enter Your Name : ");
    scanf("%[^'\n']s",Arr);        // Accept Whole String
    
    printf("Your Name is : %s\n",Arr);
    
    return 0;
}