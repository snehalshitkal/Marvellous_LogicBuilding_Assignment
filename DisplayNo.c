/* Acdept no from user 
    If number is less than 50 then print small
    If it is greater than 50 and less than 100 print medium
    If it is greater than 100 then print large*/

# include<stdio.h>

void Number(int iNo)
{
    if (iNo<50)
    {
        printf("small");
    }
    if((iNo>50)&&(iNo<100))
    {
        printf("Medium");
    } 
    else 
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}