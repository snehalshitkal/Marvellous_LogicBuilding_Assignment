/*
    Write a program which Checks wheater 15th bit is ON or OFF.
*/

#include<iostream>
using namespace std;
typedef unsigned int UNIT;
bool CheckBit(UNIT iNo)
{
    UNIT iMask =16338;
    UNIT iResult = 0;

    iResult = iNo & iMask;
    return (iResult == iMask);

    
}
int main()
{
    UNIT iValue = 0;
    bool bRet = false;

    cout<<"Enter number from user:\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"15th bit is ON:\n";
    }
    else
    {
        cout<<"15th bit is OFF:\n";
    }
    return 0;
}