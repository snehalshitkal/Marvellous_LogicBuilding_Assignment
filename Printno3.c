/* Accept number from user and print number line
input    4
output   -4 -3  -2   -1   0   1   2   3   4   
*/

#include<stdio.h>
void PrintNo(int iNo)
{
    int icnt = 0;
    for(icnt=-iNo ; iNo>=icnt; icnt++)
    {
        printf("%d ",icnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    PrintNo(iValue);
    return 0;
}