/*
    Write java program which accept array from user and display below pattern

    Input : 8   9   7   6   4   3   4

    Output : ********
             *********
             *******
             ******
             ****
             ***
             ****

 */
import java.util.*;
class ArrayPattern
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        System.out.println("Enter the Number of Element:");
        int num = sobj.nextInt();

        int Arr[] = new int[num];

        System.out.println("Element are :");
        for(i = 0;i < num;i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Display the pattern of Element:");
        for(i = 0;i < num;i++)
        {
            for(j = 0;j< Arr[i];j++)
            {
                System.out.print("*");
            }
            System.out.println();
            
        }

    }
}