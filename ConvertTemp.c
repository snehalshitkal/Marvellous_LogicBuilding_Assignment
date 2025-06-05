/*
    Accept temperature in Fahrenheit and convert into celsius
    (1 celsius = (fahrenheit -32)*(5/9))

*/
#include<stdio.h>
double FhtoCs(float fTemp)
    {
        double dAns = 0.0;
        dAns = ((fTemp-32)*(5/9));
        return dAns;
    }

int main()
{
    float fValue = 0.0;
    double iRet = 0.0;
    printf("Enter Temperature in Fahrenheit:");
    scanf("%f",&fValue);

    iRet = FhtoCs(fValue);

    printf("Temperature in Celsius:%f",iRet);
    return 0;
}