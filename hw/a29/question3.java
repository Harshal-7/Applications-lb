// check 7,15,21,28th bit is On or Off

import java.lang.*;
import java.util.*;

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 0X08104040;
        int iResult = 0;

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

class question3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number: ");
        int iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bRet = bobj.CheckBit(iValue);

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