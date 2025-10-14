/*
Write Application which accept file name from user and read all data from that file and display content on screen
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
int main()
{
    int fd = 0,iRet=0;
    char fName[50]={'\0'};
    char Buffer[]={'\0'};

    printf("Enter the name of file that you want to read:\n");
    scanf("%s",fName);
    fd = open(fName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to read that file");
    }
    else
    {
        printf("File is successfully open with fd :%d\n",fd);
        while((iRet = read(fd,Buffer,10))!=0)
        {
            write(1,Buffer,iRet);
            memset(Buffer,'\0',10); // bcz printf buffernm fname same address
        }

        close(fd);
    }

    return 0;
}