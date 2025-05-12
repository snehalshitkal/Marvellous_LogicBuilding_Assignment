#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 10 )
    {
        printf("Hello\n",iNo);
    }
    else
    {
        printf("Demo\n",iNo);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d\n",&iValue);
    Display(iValue);

    return 0;
}