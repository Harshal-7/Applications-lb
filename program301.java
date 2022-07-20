//  First & Last 4bits are ON or OFF(1st & Last Nibble)

import java.lang.*;
import java.util.*;

class program301
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        long iNo = sobj.nextLong();

        long iMask = 0xf000000f;
        long iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("First & Last Nibbles are Completly ON");
        }
        else
        {
            System.out.println("First Nibble & Last Nibble is OFF");
        }

    }
}