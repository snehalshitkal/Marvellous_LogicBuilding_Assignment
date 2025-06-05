#include<stdio.h>
int EvenOddDifference(int iNo)
{
    int iFact1 = 1,iFact2=1, iCnt = 0;
    int Diff = 0;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)==0)
        {
           iFact1 = iFact1 * iCnt; 
        }
        else
        {
            iFact2 = iFact2 *iCnt;
        }
        Diff = iFact1 - iFact2;
    }
    return Diff;
   
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter Number:");
    scanf("%d",&iValue);
    iRet = EvenOddDifference(iValue);
    printf("Even Number of Factorial is %d",iRet);
    return 0 ;
}