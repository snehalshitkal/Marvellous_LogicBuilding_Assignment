/*
Write a program which check whether first and last bit is ON or OFF.
First it means bit number 1 and last bit means bit number 32.
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 2147483649;
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
        cout<<"first and last bit are ON\n";
    }
    else
    {
        cout<<"first and last bit are OFF\n";
    }
    return 0;
}