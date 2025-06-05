/*  Calculate Area of Circle */
#include<stdio.h>
double CircleArea(float fRadius)
{
    double PI = 3.14,Area =  0.0;
    Area = PI * fRadius * fRadius;
    return Area;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle:%f",dRet);
    return 0;
}