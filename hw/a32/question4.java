// Accept 1 number & Position & TOGGLE that bit at that position

import java.lang.*;
import java.util.*;

class Bitwise
{
    public int OffBit(int iNo,int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;

        iMask = iMask << (iPos - 1);

        iResult = iNo ^ iMask;
        return iResult;
    }
}

class question4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number: ");
        int iValue = sobj.nextInt();
        System.out.println("Enter Position: ");
        int iPos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.OffBit(iValue,iPos);

        System.out.println("Modified Number : " + iRet);
    }
}