/*
Write a program which accept string from user and copy the content of that string
into another string.(implement strcnpy()).
Note: If third parameter is greater than the size of source string then copy whole string into 
destination. 
Input: Marvellous Infosystem
        10
output: Marvellous
*/

#include<stdio.h>
#include<string.h>
void StrNCpy(char *str,char *dest,int iCnt)
{
    while((*str!='\0')&&(iCnt!=0))
    {
        *dest = *str;
        str++;
        dest++;
        iCnt++;
    }
    *dest= '\0';        //terminate copy string
}
int main()
{
    char arr[30];
    char brr[30];
    printf("Enter string\n");
    scanf("%s",arr);
    StrNCpy(arr,brr,10);
    printf("copy string are:%s",brr);
    return 0;
}