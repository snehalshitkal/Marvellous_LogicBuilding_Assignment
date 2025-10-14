/*
    Merge two files alternatively into third file
 */

import java.util.*;
import java.io.*;

class MergeFile
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);

        File fobj1 = new File("PPA.txt");
        File fobj2 = new File("LB.txt");

        System.out.println("Name of merg file: ");
        String fName = sobj.nextLine();

        File fobj3 = new File(fName);
        try
        (
            BufferedReader bobj1 = new BufferedReader(new FileReader(fobj1));
            BufferedReader bobj2 = new BufferedReader(new FileReader(fobj2));
            BufferedReader bobj3 = new BufferedReader(new FileReader(fName));
        )
        {
        while(true)
        {
            String str1 = bobj1.readLine();
            String str2 = bobj2.readLine();

            if(str1 != null)
            {
                bobj3.write(str1);
                bobj3.newLine(str2);
            }

             if(str2 != null)
            {
                bobj3.write(str1);
                bobj3.newLine();
            }
            System.out.println("Files merged successfully into: " + fName);
        }
    }

    catch(IOException obj)
    {
        System.out.println("An error occurred: " +obj.getMessage());
    }


    }
}