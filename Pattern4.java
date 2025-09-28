/*
    Input : Hello

    output:
            H   e   l   l   o
            H   e   l   l   *
            H   e   l   *   *
            H   e   *   *   *
            H   *   *   *   *
            H   e   *   *   *
            H   E   l   *   *
            H   E   l   l   *
            H   E   l   o   o

 */

import java.util.*;
class Marvellous
{
    public void Pattern(String str)
    {
        int i = 0, j = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr.length ;j++)
            {
                if(j <= Arr.length - i)
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

         for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr.length ;j++)
            {
                if(j <=  i)
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
class Pattern4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        Marvellous mobj = new Marvellous();
        mobj.Pattern(str);
    }
}