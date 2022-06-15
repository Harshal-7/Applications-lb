import java.lang.*;
import java.util.*;

/*
                                                                                                            !
32  31  30  29  28  27  26  25  24  23  22  21  20  19  18  17  16  15  14  13  12  11  10  9   8   7   6   5   4   3   2   1

0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   0   1

*/
//  0000 0000    0000 0000    0000 0000    0000 0000
//  accept number & position & toggle bit from that positions

class Bitwise
{
    public int OnBit(int iNo,int iPos)
    {
        if(iPos <= 0 || iPos > 32)
        {
            System.out.println("Invalid Position!!");
            return 0;
        }

        int iMask = 0X00000001;
        iMask = iMask << (iPos-1);
        int iResult = 0;

        iResult = iNo ^ iMask;
        return iResult;
    }
}

class program210
{
    public static void main(String arg[])
    {
        int iValue = 0;
        int iPos = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter Position : ");
        iPos = sobj.nextInt();

        Bitwise bobj = new Bitwise();

        int iRet = bobj.OnBit(iValue,iPos);
        System.out.println("Updated number is : " + iRet);

    }
}