#include<stdio.h>

int CountVowel(char *ptr)
{
    int iCount = 0;
    
    while(*ptr != '\0')
    {
        if((*ptr == 'A') || (*ptr == 'E') || (*ptr == 'I') || (*ptr == 'O') || (*ptr == 'U')||
          (*ptr == 'a') || (*ptr == 'e') || (*ptr == 'i') || (*ptr == 'o') || (*ptr == 'u'))
        {
            iCount++;
        }
        ptr++;
    }  
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountVowel(Arr);
    printf("Count Of Vowels is : %d\n",iRet);

    return 0;
}