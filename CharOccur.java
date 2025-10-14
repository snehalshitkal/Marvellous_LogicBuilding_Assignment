/*
    Accept Array of character from user and accept one character .Return occurance of that 
    character without considering case

*/

import java.util.*;
class CharOccur
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        System.out.println("Enter character");
        char ch = sobj.nextLine().chatAt(0);

        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int i = 0;i < Arr.length; i++)
        {
            if((Arr[i] == ('a' - 'z')) && (Arr[i] == ('A' - 'Z')))
            {
                if(Arr[i] == ch)
                {
                    iCount++;
                }   
            }
            
        }
        System.out.println("Occurance of letter: "+iCount);


    }

}