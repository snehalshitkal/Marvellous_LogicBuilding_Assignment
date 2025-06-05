/*
Write a program which accept string from user and count number of captal character.
input:  "Marvellous Multi OS"
output  4
*/
#include<stdio.h>
int CountCaptal(char *str)
{
    int iCnt = 0;
    while (*str!='\0')
    {
        if((*str >='A')&&(*str<='Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt ;
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCaptal(arr);
    printf("%d",iRet);
    return 0;
}