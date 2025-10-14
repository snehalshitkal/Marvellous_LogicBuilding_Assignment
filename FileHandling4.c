/*
Write application which accept file name from user and display size of file.
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main()
{
char fName[20] = {'\0'};
char Buffer[10]={'\0'};
int fd = 0;
long int fileSize = 0;


printf("Enter the file name that you want to open:\n");
scanf("%s",fName);

fd = open(fName,O_RDONLY);
if (fd == -1)
    {
        printf("Unable to open file");

    }
    fileSize = lseek(fd, 0, SEEK_END);
    printf("Size of the file is: %ld bytes\n", fileSize);
return 0;
}