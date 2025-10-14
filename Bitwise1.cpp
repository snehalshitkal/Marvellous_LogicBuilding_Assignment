/*
write a program which accept one number from user and off 7th bit of that number if it is ON.
Return modified number.
input:  79
output: 15
*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo)     
{
    UINT iMask = 4294967231;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = ChangeBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}