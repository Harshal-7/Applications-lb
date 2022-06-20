import java.lang.*;
import java.util.*;

class node
{
    public int data;
    public node next;
}

class SinglyCircularLL
{
    private int Count;
    private node Head;
    private node Tail;

    public SinglyCircularLL()
    {
        Head = null;
        Tail = null;
        Count = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = new node();
        newn.data = No;
        newn.next = null;

        if(Count == 0)
        {
            Head = newn;
            Tail = newn;
        }
        else
        {
            newn.next = Head;
            Head = newn;
        }
        
        Tail.next = Head;

        Count++;
    }

    public void InsertLast(int No)
    {
        node newn = new node();
        newn.data = No;
        newn.next = null;

        if(Count == 0)
        {
            Head = newn;
            Tail = newn;
        }
        else
        {
            Tail.next = newn;
            Tail = Tail.next;
        }

        Tail.next = Head;
        Count++;
    }

    public void DeleteFirst()
    {
        if(Count == 0)
        {
            Head = null;
            Tail = null;
        }
        else
        {
            Head = Head.next;
            Tail.next = Head;
        }
        Count--;
    }

    public void DeleteLast()
    {
        if(Count == 0)
        {
            return;
        }
        else if(Count == 1)
        {
            Tail = null;
            Head = null;
        }
        else
        {
            node temp = new node();
            temp = Head;

            while(temp.next.next != Tail)
            {
                temp = temp.next;
            }

            Tail = temp;
            temp.next = null;
            Tail.next = Head;
        }

        Count--;
    }

    public void InsertAtPos(int No,int iPos)
    {
        int iSize = 0;
        iSize = CountNode();

        if((iPos < 1) || (iPos > iSize + 1))
        {
            System.out.println("Invalid Position!!");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == iSize + 1)
        {
            InsertLast(No);
        }
        else
        {
            node temp = new node();
            node newn = new node();

            newn.data = No;
            newn.next = null;
            
            temp = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            Count++;
            
        }
    }
    public void DeleteAtPos(int iPos)
    {
        int iSize = 0;
        iSize = CountNode();

        if((iPos < 1) || (iPos > iSize))
        {
            System.out.println("Invalid Position!!");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iSize)
        {
            DeleteLast();
        }
        else
        {
            node temp = new node();   
            temp = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < (iPos - 1); iCnt++)
            {
                temp = temp.next;
            }

            node tempX = new node();
            tempX = temp.next;
            temp.next = tempX.next;
            tempX = null;

            Count--;
            
        }

    }

    public void Display()
    {
        node temp = new node();
        temp = Head;

        if(Count == 0)
        {
            return;
        }

        do
        {
            System.out.print("|" + temp.data + "|  ");
            temp = temp.next;
        }while(temp != Head);

        System.out.println("");
    }

    public int CountNode()
    {
        return Count;
    }

}

class SinglyCLL
{
    public static void main(String arg[])
    {
        SinglyCircularLL obj = new SinglyCircularLL();
        int iRet = 0;

        obj.InsertFirst(30);
        obj.InsertFirst(20);
        obj.InsertFirst(10);
        obj.Display();
        iRet = obj.CountNode() ;
        System.out.println("Number of Nodes : " + iRet);

        System.out.println("\n");

        obj.InsertLast(70);
        obj.InsertLast(80);
        obj.InsertLast(90);
        obj.Display();
        iRet = obj.CountNode();
        System.out.println("Number of Nodes : " + iRet);

        System.out.println("\n");

        obj.InsertAtPos(40,4);
        obj.InsertAtPos(50,5);
        obj.InsertAtPos(60,6);
        obj.Display();
        iRet = obj.CountNode();
        System.out.println("Number of Nodes : " + iRet);

        System.out.println("\n");

        obj.DeleteAtPos(6);
        obj.DeleteAtPos(5);
        obj.DeleteAtPos(4);
        obj.Display();
        iRet = obj.CountNode();
        System.out.println("Number of Nodes : " + iRet);

        System.out.println("\n");

        obj.DeleteFirst();
        obj.DeleteFirst();
        obj.Display();
        iRet = obj.CountNode();
        System.out.println("Number of Nodes : " + iRet);
    
        System.out.println("\n");

        obj.DeleteLast();
        obj.DeleteLast();    
        obj.Display();
        iRet = obj.CountNode();
        System.out.println("Number of Nodes : " + iRet);

        System.out.println("\n");    
        
    }
}