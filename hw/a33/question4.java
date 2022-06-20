// accept 1 Number & count number of ON bits in it

import java.lang.*;
import java.util.*;

class Bitwise
{
    public int ToogleBitRange(int iNo,int iStart,int iEnd)
    {
        int iMask = 0X00000001;
        int Result = 0;
        int Count = 0;

        iMask = iMask << (iStart-1);

        Result = iNo ^ iMask;
        
        
    }
}

class question3
{
    public static void main(String arg[])
    {
        int iValue = 0;
        int Start = 0,End = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter Starting Position : ");
        iPos1 = sobj.nextInt();

        System.out.println("Enter End Position : ");
        iPos2 = sobj.nextInt();

        Bitwise obj = new Bitwise();

        int iRet = obj.ChkBit(iValue,Start,End);




    }
}