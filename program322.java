//  Linear Search   (static memory allocation asel teva no Space Complexity) (time complexity is N)

import java.lang.*;
import java.util.*;

class Array
{
    public int Arr[];

    public Array(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Elements in Array:");

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

}

class Searching extends Array
{
    public Searching(int iSize)
    {
        super(iSize);
    }

    public int LinearSearch(int iNo)
    {
        int i = 0;
        int iPos = -1;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] == iNo)
            {
                iPos = i;
                break;
            }
        }
        
        return iPos;
        
    }

}

class program322
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the size of Array:");
        int size = sobj.nextInt();

        Searching obj = new Searching(size);
        obj.Accept();
        obj.Display();

        System.out.println("Enter the element that you want to Search:");
        int iValue = sobj.nextInt();

        int iRet = obj.LinearSearch(iValue);
        
        if(iRet == -1)
        {
            System.out.println("There is no such element");
        }
        else
        {
            System.out.println("Element is there in Array at index : " + iRet); 
        }

        }
}