import java.util.Scanner;
class allocate_div
{
    String name,branch,email,address,dep,mob;
    Scanner sc=new Scanner(System.in);
    
    allocate_div()
    {
        name = branch = email = address = mob = "NIL";
    }
    
    String get()
    {
        System.out.print("\nEnter the name of the student\n");
        name = sc.next();
        System.out.print("Enter the branch of the student (comp,IT,indus,mech,chem,elex)\n");
        branch = sc.next();
        System.out.print("Enter the email ID of the student\n");
        email = sc.next();
        System.out.print("Enter the address of the student\n");
        address = sc.next();
        System.out.print("Enter the mobile number of the student\n");
        mob = sc.next();
        return branch;
    }
    
    void put()
    {
        System.out.println("\nThe student's details are:");
        System.out.println("Name: "+name);
        System.out.println("Branch: "+branch);
        System.out.println("Email ID: "+email);
        System.out.println("Address: "+address);
        System.out.println("Mobile number: "+mob + "\n");
    } 
    
    void allot(String department)
    {
        dep=department;
          
        if(dep.equals("comp"))
            System.out.println("Allotted division: A");
            
        else if(dep.equals("chem"))
            System.out.println("Allotted division: B");
           
        else if(dep.equals("mech"))
            System.out.println("Allotted division: C");
            
        else if(dep.equals("IT"))
            System.out.println("Allotted division: D");
           
        else if(dep.equals("indus"))
            System.out.println("Allotted division: E");
            
        else if(dep.equals("elex"))
            System.out.println("Allotted division: F");
            
        else
            System.out.println("\nINVALID DEPARTMENT ENTERED, NO DIVISION ALLOTTED\n");
    }
    
    public static void main(String args[])
    {
        String department;
        allocate_div o[]=new allocate_div[2];
        for(int j=0;j<2;j++)
        {
            o[j]=new allocate_div();
        }
        
        for(int i=0;i<2;i++)
        {
            department=o[i].get();
            o[i].put();
            o[i].allot(department);
        }
    }
}        
