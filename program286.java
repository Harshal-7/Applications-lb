import MarvellousMatrix.Matrix;
import java.lang.*;
import java.util.*;

class program286
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number of Rows");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number of Columns");
        int iCol = sobj.nextInt();
    
        Matrix mobj = new Matrix(iRow,iCol);
        mobj.Accept();
        mobj.Display();

    }
}