
/*
Write a program which accept string from user and display digit
Input   "inform123@45"
Output  12345
*/
#include<stdio.h>
#include<ctype.h>
void DisplayDigit(char *str)
{
    while(*str!=0)
    {
        if(isdigit(*str))
        {
            printf("%c",*str);
        }
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);
    DisplayDigit(arr);
    
    return 0;
}