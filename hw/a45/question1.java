/*  addition of diagonal elements

    INPUT   3  2  5  9
            4  3  2  2
            8  4  1  5
            3  9  7  5
    
    OUTPUT    12

*/

import Marvellous.Matrix;
import java.lang.*;
import java.util.*;

class MyMatrix extends Matrix
{
    public MyMatrix(int a,int b)
    {
        super(a,b);        
    }
    
    public int AddDiagonal()
    {
        int iSum = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
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
        int iRet = mobj.AddDiagonal();
        System.out.println("Addition of Diagonals is: " + iRet);
    }
}