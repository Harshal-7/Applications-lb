//  accept no & range And check Bits in that range are ON or OFF 

import java.lang.*;
import java.util.*;

class program302
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        long iNo = sobj.nextLong();

        System.out.println("Enter Starting Point:");
        long iStart = sobj.nextLong();
        
        System.out.println("Enter Ending Point:");
        long iEnd = sobj.nextLong();

        long iMask1 = 0xffffffff;
        long iMask2 = 0xffffffff;
        long iMask = 0;
        long iResult = 0;

        iMask1 = iMask1 << (iStart - 1);
        iMask2 = iMask2 >> (32 - iEnd);

        iMask = iMask1 & iMask2;

        iResult = iNo & iMask;

        if(iResult == iNo)
        {
            System.out.println("Bits are ON from given range");
        }
        else
        {
            System.out.println("Bits are OFF from given range");
        }

    }
}