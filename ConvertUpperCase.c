
/*
Write a program which accept string from user and convert it into lower case
Input   "inform"
Output  INFORM
*/
#include<stdio.h>
#include<ctype.h>
void ConvertUpper(char *str)
{
    while(*str!=0)
    {
        *str = toupper(*str);
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);
    ConvertUpper(arr);
    printf("Conver Upper case String:%s",arr);

    return 0;
}