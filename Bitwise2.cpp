/*
Write a program which check whether 5th and 18th bit ON or OFF.
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 131088;
    UINT iResult = 0;
    iResult = iNo & iMask;

    return (iResult == iMask);

}
int main()
{
    UINT iValue = 0;
    bool bRet = true;

    cout<<"Enter Number from user:\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"5th and 8th bit is ON\n";
    }
    else
    {
        cout<<"5th and 8th bit is OFF:\n";
    }
    return 0;
}