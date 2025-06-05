/*  Calculate Area of Rectangle */

#include<stdio.h>
double AreaRectangle(float fWidth,float fHeight)
{
    double Area =  0.0;
    Area = fWidth * fHeight;
    return Area;
}
int main()
{
    float fValue1 = 0.0,fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width:");
    scanf("%f",&fValue1);

    printf("Enter height:");
    scanf("%f",&fValue2);


    dRet = AreaRectangle(fValue1,fValue2);

    printf("Area of Rectangle:%f",dRet);
    return 0;
}