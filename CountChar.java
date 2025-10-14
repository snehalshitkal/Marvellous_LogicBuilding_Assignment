/*
    Count Number of character in a file
 */
import java.io.*;
import java.util.*;
class CountChar
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter name of file:");
        String fName = sobj.nextLine();

        File fobj = new File(fName);

        try
        (
        FileInputStream fiobj = new FileInputStream(fobj);

        
        )
        {
            int iRet = 0, iCount = 0;

            while((iRet = fiobj.read()) != -1)
            {
                char ch = (char) iRet;

               
                if (!Character.isWhitespace(ch)) 
                {
                    iCount++;
                }
            }

        }

        catch (IOException e)
        {
            System.out.println("An error occurred: " + e.getMessage());
        }

    }
}