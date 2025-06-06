#include<stdio.h>
int CountEven(int No)
{
    int count = 0,iDigit =0;
    while(No!=0)
    {
        No =No/10;
        if(No%2==0)
        {
            count++;
        }
    }       
    return count;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf(" Even Digit %d:",iRet);
    return 0;
}