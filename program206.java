import java.lang.*;
import java.util.*;

//  0000 0000    0000 0000    0000 0000    0000 1000
//  
//  4

class Bitwise
{
    public int OnBit(int iNo)
    {
        int iMask = 0X00000008;             
        int iResult = 0;

        iResult = iNo | iMask;
        return iResult;
    }
}

class program206
{
    public static void main(String arg[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        int iRet = bobj.OnBit(iValue);
        System.out.println("Updated number is : " + iRet);

    }
}