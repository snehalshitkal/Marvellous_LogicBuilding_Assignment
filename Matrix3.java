/*
    Input : Hello
    Output:
            H  
            H   e
            H   e   l   
            H   e   l   l  
            H   e   l   l   o         
 */

import java.util.*;

class Pattern
{
    public void PatternPrint(String str)
    {
        int i = 0, j = 0;

        char ch[] = str.toCharArray();

        for(i = 0; i < ch.length ; i++)
        {
            for(j = 0; j <= i; j++)
            {
                System.out.print(ch[j]+"\t");
            }
            System.out.println();
        } 
    }
}
class Matrix3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();

        pobj.PatternPrint(str);
    }
}