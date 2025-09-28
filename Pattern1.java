/*

input :  Hello

Output:
        H   *   *   *   *
        H   e   *   *   *
        H   e   l   *   *
        H   e   l   l   *
        H   e   l   l   o
 */

import   java.util.*;
class Pattern1
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
            for(j = 0 ;j < Arr.length;j++)
            {
                if(Arr[j] == i)
                {
                    System.out.print(Arr[i]+"\t");
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