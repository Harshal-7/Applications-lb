// find largest element from Matrix

import MarvellousMatrix.Matrix;
import java.lang.*;
import java.util.*;

class MyMatrix extends Matrix
{
    public MyMatrix(int a,int b)
    {
        super(a,b);
    }

    public int Maximum()
    {
        int iMax = Arr[0][0];

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }
}

class program287
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
        int iRet = mobj.Maximum();
        System.out.println("Maximum element is : " + iRet);
    }
}