/*
write a program which accept one number from user and ON first 4 bits.
Return modified number.
input:  73
output: 79
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ONBit(UINT iNo)
{
    UINT iMask = 0xF;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}
int main()
{
    UINT iValue = 0, iRet = 0;
    
    cout<<"Enter Number from user:\n";
    cin>>iValue;

    iRet = ONBit(iValue);
    cout<<"Updated Number are:"<<iRet;
    return 0;
}