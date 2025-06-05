
/*
Write a program which accept string from user and copy the content of that string
into another string.(implement strcpy())
*/

#include<stdio.h>
#include<string.h>
void StrCpy(char *str,char *dest)
{
    while(*str!='\0')
    {
        *dest = *str;
        str++;
        dest++;
    }
    *dest= '\0';        //terminate copy string
}
int main()
{
    char arr[30];
    char brr[30];
    printf("Enter string\n");
    scanf("%s",arr);-+.3
    03
    
    StrCpy(arr,brr);
    printf("copy string are:%s",brr);
    return 0;
}