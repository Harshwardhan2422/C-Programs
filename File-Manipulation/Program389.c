#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int iRet = 0, fd = 0;
    char Name[50];
    char Arr[11];
    
    printf("Please Enter the file name that you want to open \n");
    scanf(" %[^\n]",Name);
    
    fd = open(Name, O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    lseek(fd, 0, SEEK_SET);
    
    iRet = read(fd, Arr, 10);
    Arr[iRet] = '\0';
    write(1, Arr, iRet);
    
    iRet = read(fd, Arr, 10);
    Arr[iRet] = '\0';
    write(1, Arr, iRet);
    
    iRet = read(fd, Arr, 6);
    Arr[iRet] = '\0';
    write(1, Arr, iRet);
    
    close(fd);
    
    return 0;
}