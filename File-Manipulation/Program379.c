#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char Name[30];
    
    printf("Please Enter the file name that you want to open \n");
    scanf(" %[^\n]",Name);
    
    fd = open(Name,O_RDWR | O_APPEND);
    
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    
    else
    {
        printf("File Successfully opened with fd : %d \n",fd);
        iRet = write(fd,"Hello World", 10);
        printf("%d Bytes Gets Successfully Return into File",iRet);
        close(fd);
    }
    
    return 0;
}