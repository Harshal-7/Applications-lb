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
    
    public void AddColumn()
    {
        int iSum = 0;
        for(int i = 0; i < 1; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                iSum = iSum + Arr[i][j];

            }
        }
    }
}

class question1
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
        mobj.AddColumn();
    }
}