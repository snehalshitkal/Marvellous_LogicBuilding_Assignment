/*
Accept N number from user and display all such number which contains 3 digit in it
input   6
element 8225  665  3   953  98  777
output  665 953 777
*/
#include<stdio.h>
#include<stdlib.h>


void Digit(int Arr[],int iLength)
{
    int iCnt=0;
    int iNum = 0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
      iNum = Arr[iCnt];
      int iDigit = 0;
      int temp = iNum;
      while(temp!=0)
      {
        temp = temp/10;
        iDigit++;
      }
      if(iDigit == 3)
      {
        printf("%d\t",Arr[iCnt]);
      }
    }
}
int main()
{
    int iSize = 0,iRet = 0,iCnt=0,iValue = 0;
    int *p = NULL;
    printf("Enter number of Element:");
    scanf("%d",&iSize);

    p = (int *) malloc (iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to  allocate memory");
        return -1;
    }
        printf("Enter %d Element",iSize);
    for (iCnt = 0;iCnt<iSize;iCnt++)
    {
         printf("Enter Element:%d\t",iCnt+1);
         scanf("%d",&p[iCnt]);
    }
     Digit(p,iSize);
    
    free(p);
    return 0;
}