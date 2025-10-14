/*

       **********
       **** ****
       ***  ***
       **   **
       *    * 
         
 */

import java.util.*;

class pattern4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of pattern want: ");
        int num = sobj.nextInt();

        int i = 0,j = 0,k = 0;

         for (i = 1; i <= num; i++) 
         {
            
            for (j = 1; j <= num - i; j++) 
            {
                System.out.print("*");
            }

            for (j = 1; j < i ; j++)
            {
                System.out.print(" ");
            }

            for (j = 0; j < num - i; j++) 
            {
                System.out.print("*");
            }
            System.out.println();
        }
         
    }
}