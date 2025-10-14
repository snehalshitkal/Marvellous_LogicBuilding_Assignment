/*
    Accept marks of N students from user and display  class of each student

    less than 35 - fail
    less thaan 50 - pass class 
    less than 60 - second class 
    less than 70 - first class
    greater than 70 - first class with distinction

    input  :67.3   45.8    88.9    77.5    55.3
    output: 67.3    first class
            45.8    pass
            88.9    first class with distinction
            77.5    first class with distinction
            55.3    second class
 */

import java.util.*;

class StudentInfo
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of students:");
        int num = sobj.nextInt();

        float Arr[] = new float[num];

        int i = 0;
        System.out.println("Enter the students marks:");

        for(i = 0; i < num; i++ )
        {
            Arr[i] = sobj.nextFloat();
        }

        System.out.println("Class of Students as per Marks:");

        for(i = 0; i < num; i++ )
        {
            if(Arr[i] >= 70.0)
            {
                 System.out.println(Arr[i]+ ": First class with Distinction:");
            }
            else if(Arr[i] >= 60.0)
            {
                 System.out.println(Arr[i]+" : First class :");
            }
            else if(Arr[i] >= 50.0)
            {
                 System.out.println(Arr[i]+": Second class :");
            }
            else if(Arr[i] >= 35.0)
            {
                 System.out.println(Arr[i]+": Pass :");
            }
            else if(Arr[i] <= 35.0)
            {
                 System.out.println(Arr[i]+": Fail :");
            }
           
        }

    }
}