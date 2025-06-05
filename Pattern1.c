/*
    Accept number from user and display below pattern
    Input:  5
    Output: A   B   C   D   E 
*/

#include<stdio.h>
void pattern(int no)
{
    int i = 0;
    char ch = 'A';
    for(i = 1;i<=no;i++)
    {
        printf("%c\t",ch);
        ch++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number of elemnet:");
    scanf("%d",&iValue);

    pattern(iValue);
    return 0;
}