/*
    Accept Array of character from user and accept one character.
    Return difference between freq of capital and freq of small chaaracter

*/

import java.util.*;
class FreqChar
{
    public static int FreqCharacter(char Arr[])
    {
        int iCount1 = 0,iCount2 = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if((ch == 'a') || (ch == 'z'))
            {
                if(Arr[i] == ch)
                {
                    iCount1++;
                }   
            }
            else if ((ch == 'A') || (ch == 'Z'))
            {
                if(Arr[i] == ch)
                {
                    iCount2++;
                }   
            }
            
        }
        int Ans = iCount1 - iCount2;
       return Ans;

    }

    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        System.out.println("Enter character");
        String ch = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int iRet = FreqCharacter(Arr);
        System.out.println("Frequency of character : "+iRet);
    }
}