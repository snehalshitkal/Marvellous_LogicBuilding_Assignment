import java.util.*;

class ReverseWord
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Tokens[] = str.split(" ");

        StringBuilder sb = null;

        for(String s : Tokens)
        {
            sb = new StringBuilder(s);

            sb.reverse();

            System.out.println(sb);
        }
    }
}
