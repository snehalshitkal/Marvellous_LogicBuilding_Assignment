
/*
Write a program which accept string from user and copy the Capital character of that string
into another string.
input:  Marvellous Multi OS
output:MMOS
*/

#include<stdio.h>
#include<string.h>
void StrCpy(char *str,char *dest)
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *dest=*str;
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
    printf("copy string are:%s",brr);
    return 0;
}