#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];
    
    printf("Please Enter the file name that you want to open \n");
    scanf("%[^'\n']s",Name);
    
    fd = open(Name,O_RDWR);
    
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File Successfully opened with fd : %d \n",fd);
        write(fd,"Jay Ganesh", 10);
    }
    
    return 0;
}