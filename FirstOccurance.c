/*
Write a program accept string from user and accept one character.
Return index of  first occurance of that character.
input: Marvellous
        M
output: 1
*/
#include<stdio.h>
#include<ctype.h>

int FirstOccurance(char *str,char ch)
{
    int i = 0;
    while(*str!=\'0')
    {
        if(str[i]==ch)
        {
            return i;
        }
        i++;
    }
    return -1;

}
int main()
{
    char arr[20];
    char cValue;
    int bRet =0;

    printf("Enter String:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    bRet = FirstOccurance(arr,cValue);

    printf("First occurance is %d", bRet);

    
    return 0;
}