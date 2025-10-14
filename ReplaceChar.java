/*
    Accept Array of character from user and replace each capital character 
    with its corresponding small character
 */


import java.util.*;
class ReplaceChar
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0;i < Arr.length; i++)
        {
            if((Arr[i] >= 'A')&& (Arr[i] <= 'Z'))
            {
                Arr[i] = (char)(Arr[i] + 32);
                System.out.println(Arr[i]+"\t");
            }
            else
            {
                System.out.println(Arr[i]+"\t");
            }
        }


    }

}