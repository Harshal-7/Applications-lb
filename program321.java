//  Searching

import java.lang.*;
import java.util.*;

class Array
{
    private int Arr[];

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
            System.out.println(Arr[i]);
        }
    }

}

class program321
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter size of Array:");
        int iValue = sobj.nextInt();

        Array aobj = new Array(iValue);
        aobj.Accept();
        aobj.Display();
    }
}