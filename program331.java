//  Sorting (selection sort)

import java.lang.*;
import java.util.*;

interface MarvellousSort
{
    public void Accept();
    public void Display();
    public void BubbleSort();
    public void InsertionSort();
    public void SelectionSort();
}

class Array implements MarvellousSort
{
    public int Arr[];

    public Array(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Elementes in Array:");
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
        System.out.println("\n");
    }

    public void BubbleSort()
    {
        int i = 0, j = 0, temp = 0;
        boolean Swap = false;

        for(i = 0; i < Arr.length-1; i++)
        {
            Swap = false;

            for(j = 0; j < Arr.length-i-1; j++)
            {
                if(Arr[j] > Arr[j+1])
                {
                    temp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1] = temp;
                    Swap = true;
                }
            }
            
            if(Swap == false)
            {
                break;
            }

            System.out.println("Pass: " + (i+1));
            Display();
        }

    }

    public void InsertionSort()
    {
        int i = 0, j = 0, key = 0;

        for(i = 1; i < Arr.length; i++)
        {
            key = Arr[i];
            j = i - 1;

            while(j >= 0 && Arr[j] > key)
            {
                Arr[j+1] = Arr[j];
                j = j - 1;
            }
            Arr[j+1] = key;
        }
    }

    public void SelectionSort()
    {
        int index_of_min = 0;
        int temp = 0;

        for(int x = 0; x < Arr.length; x++)
        {
            index_of_min = x;

            for(int y = x; y < Arr.length; y++)
            {
                if(Arr[index_of_min] > Arr[y])
                {
                    index_of_min = y;
                }
            }
            temp = Arr[x];
            Arr[x] = Arr[index_of_min];
            Arr[index_of_min] = temp;
        }
    }
}

class program331
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of Array:");
        int size = sobj.nextInt();

        Array aobj = new Array(size);
        aobj.Accept();
        aobj.Display();
        
        aobj.SelectionSort();
        System.out.println("Data After Sorting:\n");
        aobj.Display();
    }
}