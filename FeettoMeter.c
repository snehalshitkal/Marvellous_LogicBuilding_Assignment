/*
    Accept area in square feet  and convert into square meter
    1 sq feet = 0.0929 sq meter

*/

#include<stdio.h>
double SquareMeter(int ifeet)
{
    double dAns = 0.0;
    dAns = ifeet * 0.0929;
    return dAns;

}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Area in square meter:%f",dRet);
    return 0;
}