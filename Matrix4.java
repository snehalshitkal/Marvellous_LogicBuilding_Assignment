/*
    Wtite a java program which accept matrix from user and  trace and normal of given matrix. 
    Here trace of the matrix  is the sum of the element of the main diagonal.
    ie the diagonal from the upper left to the lower right of matrix. 
    Normal of the matrix is the square root the sum of all  the elements 
 */


import java.util.*;
class Matrix4
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

    
    int sum = 0;
    for(i = 0; i  < num; i++ )
    {
        for(j = 0; j < num; j++)
        {    
            if(i == j)
            {
                sum  = sum + Arr[i][j]; 
            }
               
        }
    }
    System.out.println("Sum of Diagonal : "+sum);

    for(i = 0; i  < num; i++ )
    {
        for(j = 0; j < num; j++)
        {    
            sum  = sum + Arr[i][j];   
        }
    }
     System.out.println("Sum of Normal: "+sum);
    }
}