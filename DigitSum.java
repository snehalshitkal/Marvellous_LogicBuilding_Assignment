/*
    Accept array from user andReplace each member with summation of digit
    Input : 98  687 56  549 87  9

    output: 17  21 11  18 15  9
 */
import java.util.*;
class DigitSum
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the of elements in Array:");
        int num = sobj.nextInt();

        int i = 0,j = 0;
        int Arr[] = new int[num];

        System.out.println(" elements in Array:");

        for(i = 0; i < num;i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Display the Reverse Elements are: ");
        for(i = 0; i < num ; i++)
        {
            int Temp = Arr[i];
            int iSum = 0;
            while(Temp != 0)
            {
                int Digit = Temp % 10;
                iSum = iSum + Digit;
                Temp = Temp / 10;
            }
            System.out.print(iSum+ "\t");
        }
        

    }
}