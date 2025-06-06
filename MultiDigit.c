#include<stdio.h>
int MultipliDigit(int No)
{
    int Mult = 1,iDigit =0;
    while(No!=0)
    {
        iDigit = No % 10;
        Mult = Mult * iDigit;
        No =No/10;
    }       
    return Mult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = MultipliDigit(iValue);
    printf(" Multipliplication of all Digit %d:",iRet);
    return 0;
}