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
        System.out.println(this.RID + "   " + this.Name + "\t" + this.Salary);
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
        Scanner scanobj = new Scanner(System.in);
        System.out.println("Marvellous Customized DBMS started successfully...."); 
        String Query = "";

        while(true)
        {
            System.out.print("DBMS console > ");
            Query = scanobj.nextLine();

            String tokens[] = Query.split(" ");
        
            int QuerySize = tokens.length;

            if(QuerySize == 1)
            {
                if("Help".equals(tokens[0]))
                {
                    System.out.println("This Application is used to demonstrate customized DBMS");
                    System.out.println("\nExit : Terminate DBMS");
                    System.out.println("Display all data : select * from student\n");
                }
                else if("Exit".equals(tokens[0]))
                {
                    System.out.println("Thank you for using Marvellous DBMS");
                    break;
                }
            }
            else if(QuerySize == 2)
            {

            }
            else if(QuerySize == 5)
            {
                //  insert into student Harshal 1000
                if("insert".equals(tokens[0]) && "into".equals(tokens[1]))
                {
                    lobj.InsertData(tokens[3],Integer.parseInt(tokens[4]));
                }
            }

        
        }
    
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

    public void AggregateMax()
    {
        int iMax = 0;
        Student temp = null;

        for(Student sref : lobj)
        {
            if(sref.Salary > iMax)
            {
                iMax = sref.Salary;
                temp = sref;
            }
        }
        System.out.println("Inforamtion of Student having Maximum Salary : ");
        temp.DisplayData();
    }
    
    public void AggregateMin()
    {
        int iMin = lobj.getFirst().Salary;
        Student temp = lobj.getFirst();

        for(Student sref : lobj)
        {
            if(sref.Salary < iMin)
            {
                iMin = sref.Salary;
                temp = sref;
            }
        }
        System.out.println("Inforamtion of Student having Minimum Salary : ");
        temp.DisplayData();
    }

    public void AggregateSum()
    {
        long iSum = 0;   

        for(Student sref : lobj)
        {
            iSum = iSum + sref.Salary;
        }
        
        System.out.println("Summation of Salaries is : " + iSum);
    }

    public void AggregateAvg()
    {
        long iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + sref.Salary; 
        }

        System.out.println("Average Salary is : " + (iSum / lobj.size()));
    }

    public void AggregateCount()
    {
        System.out.println("Count is : " + lobj.size());
    }

}

class program319
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        DBMS dobj = new DBMS();
        dobj.StartDBMS();

        // dobj.InsertData("Harshal",4400);
        // dobj.InsertData("Sakshi",2300);
        // dobj.InsertData("Sachin",6500);
        // dobj.InsertData("Pankaj",1300);
        // dobj.InsertData("Swati",7400);
        // dobj.InsertData("Rajas",9300);

        // dobj.DisplayAll();

        // System.out.println();        
        // dobj.DisplaySpecific(2);
        // dobj.DisplaySpecific("Sachin");
        
        // dobj.DeleteSpecific(2);
        // System.out.println();
        // dobj.DisplayAll();

        // System.out.println();
        // dobj.DeleteSpecific("Pankaj");
        // dobj.DisplayAll();

        // System.out.println();
        // dobj.AggregateMax();

        // System.out.println();
        // dobj.AggregateMin();

        // System.out.println();
        // dobj.AggregateSum();

        // System.out.println();
        // dobj.AggregateAvg();

        // System.out.println();
        // dobj.AggregateCount();

    }
}