import java.lang.*;
import java.util.*;

class Array
{
    public int Arr[];

    public Array(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Elements in Array");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements from Array are:");
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i] + "\t");
        }
        System.out.println();
    }

    public void BubbleSort()
    {
        int temp = 0;
        boolean swap = false;

        for(int i = 0; i < Arr.length-1; i++)
        {
            swap = false;

            for(int j = 0; j < Arr.length-i-1; j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j+1];
                    Arr[j+1] = Arr[j];
                    Arr[j] = temp;
                    swap = true;
                }
            }

            if(swap == false)
            {
                break;
            }

            System.out.println("\nPass : " + (i+1));
            Display();

        }
    }
}


public class program359
{
    public static void main( String args[] )
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number of Elements in Array:");
        int iSize = sobj.nextInt();

        Array aobj = new Array(iSize);

        aobj.Accept();
        aobj.Display();

        System.out.println("\nAfter Bubble Sort");

        aobj.BubbleSort();
    }
}