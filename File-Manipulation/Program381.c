#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int iRet = 0;
    char Name[30];
    
    printf("Please Enter the file name that you want to Delete \n");
    scanf(" %[^\n]",Name);
    
    iRet = unlink(Name);
    
    if(iRet == -1)
    {
        printf("Unable to delete file\n");
    }
    
    else
    {
        printf("file Successfully deleted \n");
    }
    
    return 0;
}