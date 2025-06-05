/*
    Accept number from user and display below pattern
    Input:  8
    Output: 2   4   6   8   10  12  14  16
*/

#include<stdio.h>
void pattern(int no)
{
    int i = 0, num = 0;
    
    for(i = 2;no>=i;i++)
    {
        if(no%2==0)
        {
            num = 2 * i;
            printf(" %d\t",num);
        }
        
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