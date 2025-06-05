/* Accept number from user and print number till that number*/

#include<stdio.h>
void PrintNo(int iNo)
{
    int icnt = 0;
    for(icnt=1 ; iNo>=icnt; icnt++)
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