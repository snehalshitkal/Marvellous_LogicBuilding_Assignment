/*Accept no from user and print number of $ * on screen  */

#include<stdio.h>

void pattern(int iNo)
{
    int icnt = 0;
    for(icnt=1 ; iNo>=icnt; icnt++)
    {
        printf(" $   *",icnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}