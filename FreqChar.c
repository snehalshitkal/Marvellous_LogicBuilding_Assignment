/*
Write a program accept string from user and accept one character.
Return frequency of that character.
input: Marvellous
        M
output: 1
*/
#include<stdio.h>


int FreqChar(char *str,char ch)
{
    int count=0;
 while(*str!='\0')
    {
        if(*str == ch)
        {
          count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char arr[20];
    char cValue;
    int bRet;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    bRet = FreqChar(arr,cValue);
    printf("Character frequency %d",bRet);  
    return 0;
}