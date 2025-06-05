/*
Accept N number from user and display summetion of each digit in it
input   6
element 8225  665  953  98  777
output  17   17    17   17  21
*/
#include<stdio.h>
#include<stdlib.h>


void DigitSum(int Arr[],int iLength)
{
    int iCnt=0;
    int iNum = 0,sum=  0;
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
      iNum = Arr[iCnt];
      int iDigit = 0;
      int temp = iNum;
      while(temp!=0)
      {
        iDigit = temp % 10;
        sum = sum+iDigit;
        temp = temp/10;
      }
      printf(" %d\t",sum);
      
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
     DigitSum(p,iSize);
    
    free(p);
    return 0;
}