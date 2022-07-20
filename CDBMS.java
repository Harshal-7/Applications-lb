import java.lang.*;
import java.util.*;

class Student
{
    public int RID;
    public String Name;
    public int Salary;

    public static int Generator;

    static
    {
        Generator = 0;
    }

    public Student(String name,int salary)
    {
        this.RID = ++Generator;
        this.Name = name;
        this.Salary = salary;
    }

    public void DisplayData()
    {
        System.out.println("---------------------------------------");
        System.out.println("   " + this.RID + "\t\t" + this.Name + "\t\t" + this.Salary);
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

        System.out.println("Marvellous Custumized DBMS Started Successfully....");

        String Query1 = "";
        String Query = "";

        while(true)
        {
            System.out.print("\nDBMS Console > ");
            Query1 = scanobj.nextLine();
            Query = Query1.toLowerCase();

            String tokens[] = Query.split(" ");

            int QuerySize = tokens.length;

            if(QuerySize == 1)
            {
                if("help".equals(tokens[0]))
                {
                    System.out.println("\nThis Application is used to demonstrate customised DBMS");
                    System.out.println("\nInsert Data           :  INSERT INTO Student Name Salary");
                    System.out.println("Display All Data      :  SELECT * FROM Student");
                    System.out.println("Display Specific Data :  SELECT FROM Student WHERE condition");
                    System.out.println("Delete Specific Data  :  DELETE FROM Student WHERE condition");
                    System.out.println("Exit                  :  Terminate DBMS\n");
                }
                else if("exit".equals(tokens[0]))
                {
                    System.out.println("Thank You for using Marvellous DBMS!");
                    break;
                }
                else
                {
                    System.out.println("\nInvalid Command....Please type 'help' on console for Help");
                }
            }
            else if(QuerySize == 4)
            {
                if("select".equals(tokens[0]) && "form".equals(tokens[2]))
                {
                    System.out.println("Invalid Command...!\nWrite 'from' instead of 'form'");
                }
                else if("select".equals(tokens[0]) && "*".equals(tokens[1]) && "from".equals(tokens[2]))
                {
                    DisplayAll();
                }
                else
                {
                    System.out.println("Invalid Command...!");
                }

            }
            else if(QuerySize == 5)
            {
                if("insert".equals(tokens[0]) && "into".equals(tokens[1]))
                {
                    InsertData(tokens[3],Integer.parseInt(tokens[4]));
                }
                else
                {
                    System.out.println("Invalid Command...!");
                }
            }
            else if(QuerySize == 7)
            {
                if("delete".equals(tokens[0]) && "from".equals(tokens[1]) && "where".equals(tokens[3]))
                {
                    DeleteSpecific(Integer.parseInt(tokens[6]));
                }
                else if("select".equals(tokens[0]) && "from".equals(tokens[1]) && "where".equals(tokens[3]) && "name".equals(tokens[4]))
                {
                    DisplaySpecific(tokens[6]);
                }
                else if("select".equals(tokens[0]) && "from".equals(tokens[1]) && "where".equals(tokens[3]))
                {
                    DisplaySpecific(Integer.parseInt(tokens[6]));
                }
            }
        }

    }

    public void InsertData(String name,int salary)
    {
        Student sobj = new Student(name,salary);
        lobj.add(sobj);
    }

    public void DisplayAll()
    {
        for(Student sref : lobj)
        {
            sref.DisplayData();
        }
    }

    public void DisplaySpecific(int rid)           //  select * from student where id = 1;
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

    public void DisplaySpecific(String name)        //  select * from student where Name = "Sachin";
    {
        for(Student sref : lobj)
        {
            if(name.equals(sref.Name))
            {
                sref.DisplayData();
            }
        }
    }

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

}

class CDBMS
{
    public static void main(String arg[])
    {
        DBMS dobj = new DBMS();
        dobj.StartDBMS();
    }
}