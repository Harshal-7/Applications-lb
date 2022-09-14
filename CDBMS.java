import java.lang.*;
import java.util.*;

class Employee
{
    public int RID;
    public String Name;
    public int Salary;
    public String Address;

    public Employee(int rid,String name,int salary,String address)
    {
        RID = rid;
        Name = name;
        Salary = salary;
        Address = address;
    }

    public void DisplayData()
    {
        int Cnt = 0, tempSal = Salary;
        while(tempSal != 0)
        {
            tempSal /= 10;
            Cnt++;
        }
        
        if(Address.length() >= 8 && Name.length() >= 8 && Cnt >= 8)
        {
            System.out.println(" |\t" + RID + "\t|\t\t" + Name + "\t\t|\t\t" + Salary + "\t\t|\t\t" + Address + "\t\t\t|");
            System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");
        }
        else if(Address.length() >= 8 && Name.length() >= 8)
        {
            System.out.println(" |\t" + RID + "\t|\t\t" + Name + "\t\t|\t\t" + Salary + "\t\t\t|\t\t" + Address + "\t\t\t|");
            System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");
        }
        else if(Address.length() >= 8 && Cnt >= 8)
        {
            System.out.println(" |\t" + RID + "\t|\t\t" + Name + "\t\t\t|\t\t" + Salary + "\t\t|\t\t" + Address + "\t\t\t|");
            System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");
        }
        else if(Cnt >=8 && Name.length() >= 8)
        {
            System.out.println(" |\t" + RID + "\t|\t\t" + Name + "\t\t|\t\t" + Salary + "\t\t|\t\t" + Address + "\t\t\t\t|");
            System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");
        }
        else if(Address.length() >= 8)
        {
            System.out.println(" |\t" + RID + "\t|\t\t" + Name + "\t\t\t|\t\t" + Salary + "\t\t\t|\t\t" + Address + "\t\t\t|");
            System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");
        }
        else if(Name.length() >= 8)
        {
            System.out.println(" |\t" + RID + "\t|\t\t" + Name + "\t\t|\t\t" + Salary + "\t\t\t|\t\t" + Address + "\t\t\t\t|");
            System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");
        }
        else if(Cnt >= 8)
        {
            System.out.println(" |\t" + RID + "\t|\t\t" + Name + "\t\t\t|\t\t" + Salary + "\t\t|\t\t" + Address + "\t\t\t\t|");
            System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");
        }
        else
        {
            System.out.println(" |\t" + RID + "\t|\t\t" + Name + "\t\t\t|\t\t" + Salary + "\t\t\t|\t\t" + Address + "\t\t\t\t|");
            System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");
        }
        
    }

}

class DBMS
{
    public LinkedList <Employee> lobj;

    public DBMS()
    {
        lobj = new LinkedList<>();
    }

    public void StartDBMS()
    {
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Customized DBMS started successfully....");
        
        String Query = "";
        String Query1 = "";

        while(true)
        {
            System.out.print("\nDBMS console > ");

            Query1 = scanobj.nextLine();
            Query = Query1.toLowerCase();

            String tokens[] = Query.split(" ");

            int QuerySize = tokens.length;

            if(QuerySize == 1)
            {
                if("help".equals(tokens[0]))
                {
                    System.out.println("\nThis Application is used to demonstrate customized DBMS");
                    System.out.println("\nInsert Data              :  INSERT INTO Employee values ( RID Name Salary Address )");
                    System.out.println("Insert Data example      :  INSERT INTO Employee values ( 1 Harsh 1000 Satara )");
                    System.out.println("Insert Data Instruction  :  Please Give a Space after commands same as Above Example");
                    System.out.println("\nDisplay All Data         :  SELECT * FROM Employee");
                    System.out.println("Display Specific Data    :  SELECT FROM Employee where_condition");
                    System.out.println("Display Specific example :  SELECT FROM Employee WHERE RID = 10");
                    System.out.println("\nUpdate record from table :  UPDATE Employee SET column_name VALUE where_condition");
                    System.out.println("Update rocord example    :  UPDATE Employee SET Adress = Pune WHERE RID = 1");
                    System.out.println("\nDelete Specific Record   :  DELETE FROM Employee where_condition");
                    System.out.println("Delete Specific Data eg. :  DELETE FROM Employee WHERE RID = 7");
                    System.out.println("\nExit                     :  Terminate DBMS\n");
                }
                else if("exit".equals(tokens[0]))
                {
                    System.out.println("Thank You For Using DBMS...!\n");
                    break;
                }
                else if("chk".equals(tokens[0]))
                {
                    DisplayAll();
                }
                else
                {
                    System.out.println("Invalid Command....");
                    System.out.println("Please type 'help' on console for the Help");
                }
            }
            else if(QuerySize == 4)
            {
                //  Display all of the data
                if("select".equals(tokens[0]) && "*".equals(tokens[1]) && "from".equals(tokens[2]) && "employee".equals(tokens[3]))
                {
                    DisplayAll();
                }
            }
            else if(QuerySize == 7)
            {
    
                // Display specific data from employee_table
                if("select".equals(tokens[0]) && "from".equals(tokens[1]) && "employee".equals(tokens[2]) && "where".equals(tokens[3]))
                {
                    if("rid".equals(tokens[4]))
                    {
                        DisplaySpecific(Integer.parseInt(tokens[6]));
                    }
                    else if("name".equals(tokens[4]))
                    {
                        DisplaySpecific(tokens[6]);
                    }
                    else if("salary".equals(tokens[4]))
                    {
                        DisplaySpecificSal(Integer.parseInt(tokens[6]));
                    }
                    else if("address".equals(tokens[4]))
                    {
                        DisplaySpecificAdd(tokens[6]);
                    }
                }
                // Deleting specific data from dbms
                else if("delete".equals(tokens[0]))
                {
                    if("from".equals(tokens[1]) && "employee".equals(tokens[2]) && "where".equals(tokens[3]))
                    {
                        if("rid".equals(tokens[4]))
                        {
                            DeleteSpecific(Integer.parseInt(tokens[6]));
                        }
                        else if("name".equals(tokens[4]))
                        {
                            DeleteSpecific(tokens[6]);
                        }
                        else if("salary".equals(tokens[4]))
                        {
                            DeleteSpecificSal(Integer.parseInt(tokens[6]));
                        }
                        else if("address".equals(tokens[4]))
                        {
                            DeleteSpecificAdd(tokens[6]);
                        }
                    }
                    else
                    {
                        System.out.println("\nDelete Specific Record   :  DELETE FROM Employee where_condition");
                        System.out.println("Delete Specific Data eg. :  DELETE FROM Employee WHERE RID = 7");
                    }
                }

            }
            else if(QuerySize == 10)
            {
                //  Inserting the data in dbms
                if("insert".equals(tokens[0]) && "into".equals(tokens[1]) && "employee".equals(tokens[2]) && "values".equals(tokens[3]))
                {
                    if("(".equals(tokens[4]) && ")".equals(tokens[9]))
                    {
                        InsertData(Integer.parseInt(tokens[5]),tokens[6],Integer.parseInt(tokens[7]),tokens[8]);
                    }
                    else
                    {
                        System.out.println("\nInsert Data example      :  INSERT INTO Employee values ( RID Name Salary Address )");
                        System.out.println("Insert Data example      :  INSERT INTO Employee values ( 1 Harshal 1000 Satara )");
                        System.out.println("Please Give a Space after after paranthesis & after comms also same as Above Example");
                    }
                }
            }
            else if(QuerySize == 11)
            {
                if("delete".equals(tokens[0]) && "from".equals(tokens[1]) && "employee".equals(tokens[2]) && "where".equals(tokens[3]))
                {
                    // where name = __ & salary = __
                    if( ("name".equals(tokens[4]) && "=".equals(tokens[5]) && "&".equals(tokens[7]) && "salary".equals(tokens[8]) && "=".equals(tokens[9])))
                    {
                        DeleteNameSal(tokens[6],Integer.parseInt(tokens[10]));
                    }
                    else if(("salary".equals(tokens[4]) && "=".equals(tokens[5]) && "&".equals(tokens[7]) && "name".equals(tokens[8]) && "=".equals(tokens[9])))
                    {
                        DeleteNameSal(tokens[10],Integer.parseInt(tokens[6]));
                    }
                    //  where name = _ & address = _
                    else if(("name".equals(tokens[4]) && "=".equals(tokens[5]) && "&".equals(tokens[7]) && "address".equals(tokens[8]) && "=".equals(tokens[9])))
                    {
                        DeleteNameAdd(tokens[6],tokens[10]);
                    }
                    else if(("address".equals(tokens[4]) && "=".equals(tokens[5]) && "&".equals(tokens[7]) && "name".equals(tokens[8]) && "=".equals(tokens[9])))
                    {
                        DeleteNameAdd(tokens[10],tokens[6]);
                    }
                    //  where name = __ & salary = __ & address = __

                }
            }
        }
    }

    public void InsertData(int rid,String name,int salary,String address)
    {
        boolean bFlag = true;

        for(Employee eref : lobj)
        {
            if(eref.RID == rid)
            {
                System.out.println("\nThis RID is already present in the table");
                System.out.println("Please initialize the different RID!!!\n");
                bFlag = false;
            }
        }

        if(bFlag == false)
        {
            return;
        }

        Employee eobj = new Employee(rid,name,salary,address);
        lobj.add(eobj);
    }

    public void DisplayAll()
    {
        System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");

        for(Employee eref : lobj)
        {
            eref.DisplayData();
        }
    }

    public void DisplaySpecific(int rid)
    {
        System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");

        for(Employee eref : lobj)
        {
            if(eref.RID == rid)
            {
                eref.DisplayData();
                break;
            }
        }
    }

    public void DisplaySpecific(String name)
    {
        System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");

        for(Employee eref : lobj)
        {
            if(name.equals(eref.Name))
            {
                eref.DisplayData();
            }
        }
    }

    public void DisplaySpecificSal(int salary)
    {
        System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");

        for(Employee eref : lobj)
        {
            if(eref.Salary == salary)
            {
                eref.DisplayData();
            }
        }
    }

    public void DisplaySpecificAdd(String address)
    {
        System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------");

        for(Employee eref : lobj)
        {
            if(address.equals(eref.Address))
            {
                eref.DisplayData();
            }
        }
    }

    public void DeleteSpecific(int rid)
    {
        int index = 0;

        for(Employee eref : lobj)
        {
            if(eref.RID == rid)
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

        for(Employee eref : lobj)
        {
            if(name.equals(eref.Name))
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }
    
    public void DeleteSpecificAdd(String address)
    {
        int index = 0;

        for(Employee eref : lobj)
        {
            if(address.equals(eref.Address))
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    public void DeleteSpecificSal(int salary)
    {
        int index = 0;

        for(Employee eref : lobj)
        {
            if(eref.Salary == salary)
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    public void DeleteNameSal(String name,int salary)
    {
        int index = 0;

        for(Employee eref : lobj)
        {
            if(name.equals(eref.Name) && eref.Salary == salary)
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    public void DeleteNameAdd(String name,String address)
    {
        int index = 0;

        for(Employee eref : lobj)
        {
            if(name.equals(eref.Name) && address.equals(eref.Address))
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    public void DeleteSalAdd(int salary,String address)
    {
        int index = 0;

        for(Employee eref : lobj)
        {
            if(eref.Salary == salary && address.equals(eref.Address))
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    public void DeleteNameSalAdd(String name,int salary,String address)
    {
        int index = 0;

        for(Employee eref : lobj)
        {
            if(name.equals(eref.Name) && eref.Salary == salary && address.equals(eref.Address))
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


/*

insert into employee values ( 1 Luffy 10000 One_Piece )

insert into employee values ( 2 Zoro 9000 One_Piece )

insert into employee values ( 3 Naruto 7000 Naruto )

insert into employee values ( 4 Araragi 8000 Bakemonogatari )

insert into employee values ( 5 Gintoki 8500 Gintama )

insert into employee values ( 6 Kaguya_Sama 9000 Love_Is_War )

delete from employee where rid = 1

*/