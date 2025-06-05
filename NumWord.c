/* Accept single digit display in word
    input   9
    output  Nine    */
#include <stdio.h>
void Display(int iNo)
{
    iNo = -iNo;
    switch(iNo)  
    {
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("Six");
        break;
        case 7:
        printf("Seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        break;
        default :
        printf("Invalid ");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}