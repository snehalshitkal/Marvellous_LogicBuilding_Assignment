/* 
Accept string from user and toggle the case.
*/
#include<stdio.h>
#include<ctype.h>
void ToggleCase(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            *str = *str +32;
        }
        else if(*str>='a'&&*str<='z')
        {
            *str = *str -32;
        }
        str++;
    }
}
int main()
{
    char arr[20];
    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);
    ToggleCase(arr);
    printf("Modified String %s",arr);
    return 0;
}