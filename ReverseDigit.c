#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0,rev = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        rev = (rev * 10) + iDigit;
        iNo = iNo / 10;
    }
    printf("%d",rev);
}
int main()
{
    int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
    
}