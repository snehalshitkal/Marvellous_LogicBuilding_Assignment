/*
    Read distance (in feet and inches)
    print sum of feet and inches
    if iches are more than 12 then consider 1 feet 
 */

import java.util.*;

class Distance
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Distance: ");

        System.out.println("Enter  Feet: ");
        int feet1 = sobj.nextInt();

        System.out.println("Enter  Inches: ");
        int inch1 = sobj.nextInt();

        System.out.println("Enter Second Distance: ");
        
        System.out.println("Enter  Feet: ");
        int feet2 = sobj.nextInt();

        System.out.println("Enter  Inches: ");
        int inch2 = sobj.nextInt();

        int feet = feet1 + feet2 ;

        int  inch = inch1 + inch2;

        System.out.println("Total Distance is: ");
        if(inch >= 12)
        {
            feet = feet + inch / 12;
            inch = inch % 12;
            
            System.out.println("Feet: "+feet+ " Inches: "+inch);

        }


    }
}