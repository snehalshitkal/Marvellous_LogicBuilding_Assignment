/*
Write application which accept file name from user and one string from user.
write that string at the end of file
*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
int main()
{
char fName[20] = {'\0'};
char Buffer[60]={"Jay Ganesh...."};
int fd = 0,iRet = 0;

printf("Enter the file name that you want to open:\n");
scanf("%s",fName);

fd = open(fName,O_WRONLY| O_APPEND);
if (fd == -1)
    {
        printf("Unable to open file");

    }
else
{
    printf("File is successfully open with fd :%d\n",fd);
    iRet = write(fd,Buffer,strlen(Buffer));
    if (iRet == -1)
    {
        printf("unable to write in file\n");
        return -1;
    }

    printf("%d bytes gets return successfully\n",iRet);          
}
return 0;
}