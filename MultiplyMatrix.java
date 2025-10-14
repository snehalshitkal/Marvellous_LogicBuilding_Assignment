
/*
 Write java program to multiply two matrices
 */
import java.util.*;
class MultiplyMatrix
{
    public static void main(String A[])
    {
        int i = 0,j = 0;
        Scanner sobj = new Scanner(System.in);

        int Arr[][] = new int[3][3];
        int Brr[][] = new int[3][3];

        System.out.println("Enter the Element of First Matrix:");
        System.out.println("Element["+(i + 1)+","+(j + 1)+"]");

        for(i = 0;i < 3;i++)
        {
            for(j =  0;j<3;j++)
            {
                Arr[i][j] = sobj.nextInt(); 
            }
        }

         System.out.println("Enter the Element of Second Matrix:");
         System.out.println("Element["+(i + 1)+","+(j + 1)+"]");

        for(i = 0;i < 3;i++)
        {
            for(j =  0;j<3;j++)
            {
                Brr[i][j] = sobj.nextInt(); 
            }
        }

        System.out.println("Multiplication of Matrix:");
        int Mult[][] = new int[3][3];
         for(i = 0;i < 3;i++)
        {
            for(j =  0;j<3;j++)
            {
                Mult[i][j] = Arr[i][j] * Brr[i][j];
                System.out.print(Mult[i][j]+"\t"); 
            }
            System.out.println();
        }
    }
}