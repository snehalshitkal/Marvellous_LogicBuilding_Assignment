/*
    Accept Array of character from user and count each capital character 
    with its corresponding small character
 */


import java.util.*;
class CountCapChar
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        int iCount = 0;
        for(int i = 0;i < Arr.length; i++)
        {
            if((Arr[i] >= 'A')&& (Arr[i] <= 'Z'))
            {
                 iCount++;
               
            }
            
        }
        System.out.println("Number of Captial letter: "+iCount);


    }

}