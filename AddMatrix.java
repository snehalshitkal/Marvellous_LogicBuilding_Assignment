/*
    Add of two matrix
 */
import java.util.*;

class AddMatrix
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0,j = 0;
       
        System.out.println("Enter the Number of Element:");
        int num = sobj.nextInt();

         int Arr[][] = new int[num][num];
         int Brr[][] = new int[num][num];

        System.out.println("Enter the  element of First Matrix:");
        for(i = 0; i < num; i++)
        {
            for(j = 0; j < num; j++)
            {
                System.out.println("Element ["+(i + 1)+","+(j + 1)+"]");
                Arr[i][j] = sobj.nextInt();
            }
            
        }

        System.out.println("Enter the  element of Second Matrix:");
        for(i = 0; i < num; i++)
        {
            for(j = 0; j < num; j++)
            {
                System.out.println("Element ["+(i + 1)+","+(j + 1)+"]");
                Brr[i][j] = sobj.nextInt();
            }
            
        }
        int Add[][] = new int[i][j];
        System.out.println("Addition of Two Matrix:");
        for(i = 0; i < num; i++)
        {
            for(j = 0; j < num; j++)
            {
               Add[i][j] = Arr[i][j] + Brr[i][j];
               System.out.print(Add[i][j]+"\t");
            }
            System.out.println();
        }

    }
}