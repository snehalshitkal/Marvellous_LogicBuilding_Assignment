/*
    Input : Hello

    output:
            H   #   #   #   #
            H   e   #   #   #
            H   E   l   #   #
            H   E   L   L   #
            H   E   L   O   O

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
                if(j <=  i)
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }
             System.out.println();
        }
    }
}
class Pattern3
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