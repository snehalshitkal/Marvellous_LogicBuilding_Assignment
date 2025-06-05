/* Accept N number and print first 5 multiple N
input    4
output   4  8  12  16  20
*/

#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int icnt = 0 , multi = 1;
    for(icnt = 1 ;iNo >= icnt ;icnt++)
    {
        multi = iNo * icnt;
        printf("%d ",multi);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0;
}