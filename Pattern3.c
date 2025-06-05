/*
    Accept number from user and display below pattern
    Input:  5
    Output: 1   *   2   *   3   *   4   *   5   *
*/

#include<stdio.h>
void pattern(int no)
{
    int i = 0;
    for(i = 1;no>=i;i++)
    {
        printf(" %d\t * \t",i);
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