// check number is Perfect or not

import java.util.*;

class Numbers
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        
        this.iNo = sobj.nextInt();
    }
    
    public void Display()
    {
        System.out.println("The Number is : " + this.iNo);
    }

    public boolean ChkPerfect()
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = (this.iNo/2); (iCnt >= 1) && (iSum <= this.iNo); iCnt--)
        {
            if(this.iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }

        }

        if(iSum == this.iNo)
        {
            return true;
        }    
        else
        {
            return false;
        }
    }

}

class program197
{
    public static void main(String arg[])
    {
        Numbers obj = new Numbers();

        obj.Accept();
        obj.Display();
        boolean bRet = obj.ChkPerfect();

        if(bRet == true)
        {
            System.out.println("It is a Perfect Number");
        }
        else
        {
            System.out.println("It is Not a Perfect Number");
        }
    }
}