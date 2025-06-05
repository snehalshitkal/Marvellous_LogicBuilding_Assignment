
/*
Write a program which accept string from user and copy the small character of that string
into another string.
*/

#include<stdio.h>
#include<string.h>
void StrCpy(char *str,char *dest)
{
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            *dest = *str;
            str++;
        }
        dest++;
    }
    *dest= '\0';        //terminate copy string
}
int main()
{
    char arr[30];
    char brr[30];
    printf("Enter string\n");
    scanf("%s",arr);
    StrCpy(arr,brr);
    printf("copy small string are:%s", brr);
    return 0;
}