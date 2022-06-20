// accept 1 Number & count number of ON bits in it

import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean ChkBit(int iNo,int Pos1,int Pos2)
    {
        int iMask1 = 0X00000001;
        int iMask2 = 0X00000001;
        int Result1 = 0;
        int Result2 = 0;
        int Count = 0;

        iMask1 = iMask1 << (Pos1-1);

        iMask2 = iMask2 << (Pos2-1);

        Result1 = (iNo ^ iMask1);
        
        Result2 = (iNo ^ iMask2);
        
        if(Result1 == 0 && Result2 == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
}

class question3
{
    public static void main(String arg[])
    {
        int iValue = 0;
        int iPos1 = 0,iPos2 = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter 1st Position : ");
        iPos1 = sobj.nextInt();

        System.out.println("Enter 2nd Position : ");
        iPos2 = sobj.nextInt();

        Bitwise obj = new Bitwise();

        boolean bRet = obj.ChkBit(iValue,iPos1,iPos2);

        if(bRet == true)
        {
            System.out.println("Bit is ON");
        }
        else
        {
            System.out.println("Bit is OFF");

        }
    }
}