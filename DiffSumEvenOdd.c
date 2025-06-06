#include<stdio.h>
int DiffSumEvenOdd(int No)
{
    int diff = 0,iDigit =0,sumeven =0,sumodd =0;
    while(No!=0)
    {
        iDigit = No % 10;
        if(iDigit%2==0)
        {
            sumeven = sumeven+iDigit;
        }
        else
        {
            sumodd = sumodd + iDigit;
        }
        No =No/10;
    } 
    diff = sumeven - sumodd;    
    return diff;  
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = DiffSumEvenOdd(iValue);
    printf(" Difference of summetion of even odd of all Digit %d:",iRet);
    return 0;
}