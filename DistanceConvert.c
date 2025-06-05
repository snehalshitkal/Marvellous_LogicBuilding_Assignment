/*   Convert Distance in Kilometer into Meter 
    1KM  = 1000 meter
*/

#include<stdio.h>
int kMtoMeter(int iDist)
{
    int iAns = 0;
    iAns = iDist * 1000;
    return iAns;
}
int main()
{

    int iValue = 0,iRet = 0;
    printf("Enter Distance:");
    scanf("%d",&iValue);

    iRet = kMtoMeter(iValue);

    printf("Distance in Meter:%d",iRet);
    return 0;
}