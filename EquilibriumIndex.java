/*
    EquilibriumIndex  of an array  is an index such that sum of elements at lower indexes is 
    equal  to the sum of element at higher indexes.
 */

class EquilibriumIndex
{

    public static int Equilibrium(int Arr[], int size)
    {
        int totalSum = 0;
        int leftSum = 0;

        
        for (int i = 0; i < size; i++) 
        {
            totalSum = totalSum + Arr[i];
        }

       
        for (int i = 0; i < size; i++)
        {
            totalSum = totalSum - Arr[i];

            if (leftSum == totalSum) 
            {
                return i; 
            }

            leftSum =leftSum +  Arr[i]; 
        }

        return leftSum; 

    }
    public static void main(String A[])
    {
        int iRet = 0;
        int Arr[]  = {-7, 1,5,2,-4,3,0};

        int size = Arr.length;

        iRet = Equilibrium(Arr,size);
        System.out.println("First Equlibrium index is "+iRet);


    }
}