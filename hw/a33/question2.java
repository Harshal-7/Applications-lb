// accept 1 Number & count number of ON bits in it

import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean ChkBit(int iNo)
    {
        int iMask = 0X00000900;
        int Result = 0;
        int Count = 0;

        Result = iNo & iMask;

        if(Result == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
}

class question2
{
    public static void main(String arg[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        Bitwise obj = new Bitwise();

        boolean bRet = obj.ChkBit(iValue);

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