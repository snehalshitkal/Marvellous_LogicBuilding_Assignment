/*
    Write a program which accpet file name from user and count
    number of capital character from that file
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#define BUFFER_SIZE 1024
int CountSmall(char FName[])
{
    int fd = 0,iCnt= 0,CountCap=0,iRet = 0;
    char Buffer[BUFFER_SIZE]={'\0'};

    fd = open(FName,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file:\n");
    }
    else
    {
        printf("File is Successfully open:  %d\n",fd);

        while((iRet=read(fd,Buffer,BUFFER_SIZE))!=0)
        {
            for(iCnt = 0;iCnt<iRet;iCnt++)
            {
                if((Buffer[iCnt]>='a')&&(Buffer[iCnt]<'z'))
                {
                    CountCap++;
                }
            }
        } 
        close(fd);
    }
    return CountCap;
}
int main()
{
    char FileName[30]={'\0'};
    int Result = 0;

    printf("Enter the File name:\n");
    scanf("%s",FileName);

    Result = CountSmall(FileName);
    printf("Number of small letter are:  %d",Result);
    return 0;
}