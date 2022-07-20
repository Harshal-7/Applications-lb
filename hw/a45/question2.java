//  Accept 1 Matrix & 1 Number and Return Frequency of that number from matrix

import Marvellous.Matrix;
import java.lang.*;
import java.util.*;

class MyMatrix extends Matrix
{
    public MyMatrix(int a,int b)
    {
        super(a,b);        
    }
    
    public int Frequency(int iNo)
    {
        int iCnt = 0;

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                if((Arr[i][j]) == iNo)
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
    }
}

class question2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number of Rows");
        int iRow = sobj.nextInt();
        System.out.println("Enter Number of Columns");
        int iCol = sobj.nextInt();
        System.out.println("Enter The Number");
        int iValue = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);
        mobj.Accept();
        mobj.Display();
        int iRet = mobj.Frequency(iValue);
        System.out.println("Frequncy is: " + iRet);
    }
}


/*
    INPUT   3  2  5  9
            4  3  2  2
            8  4  1  9
            3  9  7  5
            
            Number:  9

    OUTPUT    3
    
*/