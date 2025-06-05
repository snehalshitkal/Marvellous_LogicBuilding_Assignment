/*
Write a program accept string from user reverse that string.
input: abcd
        
output: dcba
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void ReverseString(char *str)
{
    int  start = 0;
    int end = strlen(str)-1;
    char temp;
    while(start<end)
    {
        temp = str[start];
        str[start]=str[end];
        str[end]=temp;

        start++;
        end--;
    }

}
int main()
{
    char arr[20];

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    ReverseString(arr);
    printf("Reverse string %s\n",arr);  
    return 0;
}