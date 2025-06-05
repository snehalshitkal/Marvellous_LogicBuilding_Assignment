
/*
Write a program which accept string from user and convert it into lower case
Input   "Marvellous"
Output  suollevraM
*/
#include<stdio.h>
#include<ctype.h>
void StrLowerCase(char *str)
{
    while(*str!=0)
    {
        *str = tolower(*str);
        str++;
    }

}
int main()
{
    char arr[20];
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    StrLowerCase(arr);
    printf("Modified string in Lower Case:%s",arr);

    return 0;
}