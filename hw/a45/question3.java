/*  return Maximum number from Both Diagonals

    INPUT   3  2  5  9
            4  3  2  2
            8  4  1  5
            3  9  7  5
    
    OUTPUT    9

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
    
    public int MaxDiagonal()
    {
        int iMax = 0;
        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if((j == i) && (Arr[i][j] >= iMax))
                {
                    iMax = Arr[i][j];
                }
            }
        }

        for(i = 0; i < iRow; i++)
        {
            System.out.println("1st");
            for(j = iCol-1; j >= 0; j--)
            {
                System.out.println("2nd");

                if((j == i) && (Arr[i][j] >= iMax))
                {
                    System.out.println("3rd");
                    iMax = Arr[i][j];
                }
            }
        }

        return iMax;
    }
}

class question3
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
        int iRet = mobj.MaxDiagonal();
        System.out.println("Maximum Number form Both Diagonals is: " + iRet);
    }
}