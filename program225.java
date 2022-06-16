// Singly Linear Linked List in JAVA

import java.lang.*;
import java.util.*;

class node
{
    public int data;
    public node next;
}

class SinglyLLL
{
    public node Head;
    public int Count;

    public SinglyLLL()
    {
        Head = null;
        Count = 0;
    }

    public void InsertFirst(int No)
    {
        node newn = new node();
        newn.data = No;
        newn.next = null;

        if(Head == null)        //if(Count == 0)
        {
            Head = newn;
        }
        else
        {
            newn.next = Head;
            Head = newn;
        }

        Count++;

    }

    public void InsertLast(int No)
    {
        node newn = new node();
        newn.data = No;
        newn.next = null;

        if(Head == null)
        {
            Head = newn;
        }
        else
        {
            node temp = Head;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;    
        }
        Count++;
    }

    public void InsertAtPos(int No,int iPos)
    {
        if((iPos < 1) || (iPos > Count + 1))
        {
            System.out.println("Invalid Position !!");
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == Count+1)
        {
            InsertLast(No);
        }
        else
        {
            node temp = Head;
            
            node newn = new node();
            newn.data = No;
            newn.next = null;

            for(int i = 1; i < (iPos - 1); i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;

            Count++;
        }
    }

    public void DeleteFirst()
    {
        if(Count == 0)
        {
            return;
        }

        node temp = Head;

        Head = Head.next;
        temp = null;

        Count--;
    }

    public void DeleteLast()
    {
        if(Count == 0)
        {
            return;
        }

        if(Count == 1)
        {
            Head = null;   
        }
        else
        {
            node temp = Head;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }

            temp.next = null;
        }
        Count--;
    }

    public void DeleteAtPos(int iPos)
    {
        if((iPos < 1) || (iPos > Count))
        {
            System.out.println("Invalid Position !!");
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == Count)
        {
            DeleteLast();
        }
        else
        {
            node temp = Head;
            
            for(int i = 1; i < (iPos - 1); i++)
            {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            Count--;
        }
    }

    public void Display()
    {
        node temp = Head;

        System.out.println("\nElements of Linked List are : ");

        while(temp != null)
        {
            System.out.print("|" + temp.data + "| -> ");
            temp = temp.next;
        }

        System.out.println("NULL");
        
    }

    public int CountNode()
    {
        return Count;
    }

}

class program225
{
    public static void main(String arg[])
    {
        SinglyLLL obj = new SinglyLLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        
        obj.InsertLast(101);
        obj.InsertLast(111);

        obj.Display();

        obj.InsertAtPos(75,4);
        obj.InsertAtPos(85,5);

        obj.Display();

        obj.DeleteAtPos(5);
        obj.DeleteAtPos(4);

        obj.Display();

        obj.DeleteFirst();
        obj.DeleteFirst();

        obj.Display();

        obj.DeleteLast();
        obj.DeleteLast();
        
        obj.Display();

        System.out.println("");
        // System.out.println("\nNumber of Nodes are : " + obj.CountNode());

    }
}


/*

    All DS code in C                6
    All DS code in C++  (specific)  6
    All DS code in C++  (generic)   6
    All DS code in java (specific)  6

    Total Applications : 24

*/