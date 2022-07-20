//  DBMS Project

import java.lang.*;
import java.util.*;

//  create table student(RID int, Name varchar(255), Salary int)
//  Database Schema/table
class Student
{
    public int RID;
    public String Name;
    public int Salary;

    private static int Generator;
    
    static
    {
        Generator = 0;
    }

    public Student( String str,int value)
    {
        this.RID = ++Generator;
        this.Name = str;
        this.Salary = value;
    }

    public void DisplayData()
    {
        System.out.println("| " + this.RID + "   | " + this.Name + "\t | " + this.Salary + "\t |");
    }

}

class DBMS
{
    public LinkedList <Student> lobj;

    public DBMS()
    {
        lobj = new LinkedList<>();
    }

    public void StartDBMS()
    {
        System.out.println("Customized DBMS started successfully...."); 
    }

    //  Insert into query
    public void InsertData(String str,int value)
    {
        Student sobj = new Student(str,value);
        lobj.add(sobj);
    }

    //  Display All
    public void DisplayAll()
    {
        for(Student sref : lobj)
        {
            sref.DisplayData();
        }

    }

    // Display by rid
    public void DisplaySpecific(int rid)        // eg.-> SELECT * FROM Student where RID = 1;
    {
        for(Student sref : lobj)
        {
            if(sref.RID == rid)
            {
                sref.DisplayData();
                break;
            }
        }
    }

    //  Display by Name
    public void DisplaySpecific(String name)    // eg.-> SELECT * FROM Student where Name = "Sachin";
    {
        for(Student sref : lobj)
        {
            if(name.equals(sref.Name))
            {
                sref.DisplayData();
            }
        }
    }

    //  Delete by rid
    public void DeleteSpecific(int rid)
    {
        int index = 0;

        for(Student sref : lobj)
        {
            if(sref.RID == rid)
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    public void DeleteSpecific(String name)
    {
        int index = 0;

        for(Student sref : lobj)
        {
            if(name.equals(sref.Name))
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

}

class program318
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        DBMS dobj = new DBMS();
        dobj.StartDBMS();

        dobj.InsertData("Harshal",1000);
        dobj.InsertData("Sakshi",2000);
        dobj.InsertData("Sachin",3000);
        dobj.InsertData("Pankaj",4000);
        dobj.InsertData("Swati",5000);

        dobj.DisplayAll();

        System.out.println();        
        dobj.DisplaySpecific(2);
        dobj.DisplaySpecific("Sachin");
        dobj.DeleteSpecific(2);
        System.out.println();
        dobj.DisplayAll();

        System.out.println();
        dobj.DeleteSpecific("Pankaj");
        dobj.DisplayAll();

    }
}