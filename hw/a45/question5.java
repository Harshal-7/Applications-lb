// Addition of elements from each Column

import Marvellous.Matrix;
import java.lang.*;
import java.util.*;

class MyMatrix extends Matrix
{
    public MyMatrix(int a,int b)
    {
        super(a,b);        
    }
    
    public void SwapRows()
    {
        int iTemp = 0;

        for(int i = 0; i < iRow-1; i+=2)
        {
            for(int j = 0; j < iCol; j++)
            {
                iTemp = Arr[i][j];
                Arr[i][j] = Arr[i+1][j];
                Arr[i+1][j] = iTemp;
            }
        }
    }
}

class question5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number of Rows");
        int iRow = sobj.nextInt();
        System.out.println("Enter Number of Columns");
        int iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow,iCol);
        mobj.Accept();
        mobj.Display();
        System.out.println("After Swap: ");
        mobj.SwapRows();
        mobj.Display();
        
    }
}