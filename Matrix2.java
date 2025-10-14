/*
    Wtite a java program which accept matrix from user and 
    swap the content of each consective column
 */


import java.util.*;
class Matrix2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int i = 0,j = 0;

        System.out.println("Enter the elements:");
        int num = sobj.nextInt();

        int Arr[][] = new int[num][num];
      
        for(i = 0; i < num; i++)
        {
            for(j = 0;j < num;j++)
            {
                System.out.println("Enter("+(i + 1)+","+(j + 1)+") Element");
                Arr[i][j] = sobj.nextInt();
            }
           
        }

         
        for(i = 0; i < num; i++)
        {
            for(j = 0;j < num;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }

    System.out.println("Consecutive Matrix : ");

    for(i = 0; i  < num; i++ )
    {
        for(j = 0; j + 1 < num; j = j + 2)
            { 
                int temp = Arr[i][j];
                Arr[i][j] = Arr[i][j + 1];
                Arr[i][j + 1] = temp; 
            }
    }

     for(i = 0; i < num; i++)
        {
            for(j = 0;j < num;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }

    }
}