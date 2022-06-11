// freqency of even numbers

import java.util.*;

class ArrayX
{
    private int Arr[];

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Numbers : ");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public int EvenFreq()
    {
        int iCnt = 0;
        int EvenCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                EvenCount++;
            }
        }
        return EvenCount;
    }
}

class program195
{
    public static void main(String arg[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter length of Array: ");
        iValue = sobj.nextInt();
    
        ArrayX obj = new ArrayX(iValue);

        obj.Accept();
        int iRet = obj.EvenFreq();
        System.out.println("Frequency of Even Numbers is : " + iRet);
    }
}