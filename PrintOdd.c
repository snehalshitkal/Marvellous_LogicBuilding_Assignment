/* Accept N number from user and print all odd numbers up to N
input    18
output   1  3  5  7  9  11  13
*/

#include<stdio.h>
void OddDisplayNo(int iNo)
{
    int icnt = 0;
    for(icnt = 1;iNo>=icnt;icnt++)
    {
        if((icnt%2)!=0)
        {
        printf("%d ",icnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    OddDisplayNo(iValue);
    return 0;
}