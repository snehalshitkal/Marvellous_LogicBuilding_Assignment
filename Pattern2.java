/*

input :  Hello

Output:
        H   e   l   l   o
        H   e   l   l   *
        H   e   l   *   *
        H   e   *   *   *
        H   *   *   *   *
 */

import   java.util.*;
class Pattern2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0 ; j < Arr.length;j++)
            {
                if(j < Arr.length - i)
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }  
    }
}