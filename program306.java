//  accept 2 numbers & Display common number of bits that are ON

import java.lang.*;
import java.util.*;

class program306
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter First Number:");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number:");
        int iNo2 = sobj.nextInt();

        int iCnt = 0;
        int iResult = 0;
        int iMask = 0x00000001;

        int iNo = iNo1 & iNo2;

        for(int i = 1; i <= 32; i++)
        {
            iResult = iNo & iMask;
            
            if(iResult == iMask)
            {
                System.out.println(i);
            }
            iMask = iMask << 1;
        }
    }
}