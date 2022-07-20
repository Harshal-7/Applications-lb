//  accept numbers & count no. of bits which are ON

import java.lang.*;
import java.util.*;

class program304
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        int iNo = sobj.nextInt();

        int iResult = 0;
        int iCnt = 0;
        int iMask = 0x00000001;

        for(int i = 1; i <= 32; i++)
        {
            iResult = iNo & iMask;

            if(iResult == iMask)
            {
                iCnt++;
            }
            iMask = iMask << 1;
        }

        System.out.println("Number of ON bits are: " + iCnt);
    }
}