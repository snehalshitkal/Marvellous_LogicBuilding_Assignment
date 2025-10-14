/*
Write a program which check whether 7th and 8th & 9th bit ON or OFF.
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 448;
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
        cout<<"7th and 8th & 9th bit ON\n";
    }
    else
    {
        cout<<"7th and 8th & 9th bit OFF\n";
    }
    return 0;
}