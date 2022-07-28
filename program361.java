import java.lang.*;
import java.util.*;

public class program360
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