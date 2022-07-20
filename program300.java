//  First 4bits are ON or OFF(1st Nibble)

import java.lang.*;
import java.util.*;

class program300
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        int iNo = sobj.nextInt();

        int iMask = 0x0000000f;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("First Nibble is Completly ON");
        }
        else
        {
            System.out.println("First Nibble is OFF");
        }

    }
}