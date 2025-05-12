#include<stdio.h>

void DisplayConvert(char CValue)
{
    if((CValue>='A')&&(CValue<='Z'))
    {
        CValue=CValue+('a'-'A');
        printf("%c",CValue);
    }
    else((CValue>='a')&&(CValue<='z'))
    {
        CValue=CValue+('A'-'a');
        printf("%c",CValue);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter Character");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}