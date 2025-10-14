/*
    An Array Arr[] of n integer construct a product array 
    prod[] (of same size) such that prod[i] is equal to the product of 
    all the elements of arr[] except arr[i].
    solve it without division operator and O(n).

 */

import java.util.*;

class ProdArray
{

    public void Product(int[] arr, int n) 
    {
        int[] left = new int[5];
        int[] right = new int[5];
        int[] prod = new int[5];

       
        left[0] = 1;
        for (int i = 1; i < 5; i++) 
        {
            left[i] = arr[i - 1] * left[i - 1];
        }

       
        right[n - 1] = 1;
        for (int i = 5 - 2; i >= 0; i--)
        {
            right[i] = arr[i + 1] * right[i + 1];
        }

       
        for (int i = 0; i < 5; i++)
         {
            prod[i] = left[i] * right[i];
        }

       
        for (int val : prod) 
        {
            System.out.print(val + " ");
        }
        System.out.println();
    }

}
class ProductArray
{
    public static void main(String A[])
    {

        int Arr[] = {10,3,5,6,2};
        int prod[] = {180,600,360,300,900};
        ProdArray pobj = new ProdArray();

        System.out.println("Product of Array:");

        pobj.Product(Arr,5);

    }
}