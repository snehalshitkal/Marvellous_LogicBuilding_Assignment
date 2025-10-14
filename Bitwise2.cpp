/*
write a program which accept one number from user and off 7th and 10th bit of that number if it is ON.
Return modified number.
input:  577
output: 1
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
    UINT iMask = 4294966719;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}
int main()
{
    UINT iValue = 0, iRet = 0;
    
    cout<<"Enter Number from user:\n";
    cin>>iValue;

    iRet = OffBit(iValue);
    cout<<"Updated Number are:"<<iRet;
    return 0;
}