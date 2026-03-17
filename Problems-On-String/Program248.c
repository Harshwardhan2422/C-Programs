#include<stdio.h>

struct CharCount
{
    int iUpper;
    int iLower;
    int iDigit;
    int iOther;
};

struct CharCount CountCharTypes(char *ptr)
{
    int i = 0;
    struct CharCount iResult = {0,0,0,0};
    
    while(ptr[i] != '\0')
    {
        if(ptr[i] >= 'A' && ptr[i] <= 'Z')
        iResult.iUpper++;
        
        else if(ptr[i] >= 'a' && ptr[i] <= 'z')
        iResult.iLower++;
        
        else if(ptr[i] >= '0' && ptr[i] <= '9')
        iResult.iDigit++;
        
        else
        iResult.iOther++;
        
        i++;
    }
    return iResult;
};

int main()
{
    char Arr[30];
    struct CharCount obj;
    
    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);
    
    obj = CountCharTypes(Arr);
    
    printf("UpperCase Letter : %d\n",obj.iUpper);
    printf("Lowercase Letter : %d\n",obj.iLower);
    printf("Digits Are : %d\n",obj.iDigit);
    printf("Others Are : %d\n",obj.iOther);
    
    return 0;
}