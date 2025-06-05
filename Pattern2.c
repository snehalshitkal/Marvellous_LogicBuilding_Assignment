/*
    Accept number from user and display below pattern
    Input:  5
    Output: 5   #   4   #   3   #   2   #   1   #
*/

#include<stdio.h>
void pattern(int no)
{
    int i = 0;
    for(i = no;i>=1;i--)
    {
        printf(" %d\t # \t",i);
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