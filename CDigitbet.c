#include<stdio.h>
int CountDigit(int No)
{
    int count = 0,iDigit =0;
    while(No!=0)
    {
        iDigit = No % 10;
        
        if((iDigit>=3)&&(iDigit<=7))
        {
            count++;
        }
        No =No/10;
    }       
    return count;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);
    printf(" count Digit between 3 and 7 are: %d:",iRet);
    return 0;
}