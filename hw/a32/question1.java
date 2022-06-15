// Accept 1 number & Position check bit at that pos is on or off

import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean ChkBit(int iNo,int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;

        iMask = iMask << (iPos - 1);

        iResult = iNo & iMask;
        
        if(iResult == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class question1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number: ");
        int iValue = sobj.nextInt();
        System.out.println("Enter Position: ");
        int iPos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bRet = bobj.ChkBit(iValue,iPos);

        if(bRet == true)
        {
            System.out.println("Bit is ON at position " + iPos);
        }
        else
        {
            System.out.println("Bit is OFF at position " + iPos);
        }
    }
}