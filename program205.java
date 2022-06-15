import java.lang.*;
import java.util.*;

//  0000    0000    0000    0000    0000    0000    0000    0000
//  
//  14

class Bitwise
{
    public boolean CheckBit(int iNo)
    {
        int iMask = 0X00020000;             
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

class program205
{
    public static void main(String arg[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        boolean bRet = bobj.CheckBit(iValue);

        if(bRet == true)
        {
            System.out.println("Bit is on");
        }
        else
        {
            System.out.println("Bit is off");
        }
    }
}


/*

Decimal     Hexadecimal     Binary



*/