import java.util.Scanner;

class TaskEvenOdd implements Runnable 
{
    private int max;
    private Printer print;
    private boolean isEvenNumber;

    TaskEvenOdd(Printer print, int max, boolean isEvenNumber) 
    {
        this.print = print;
        this.max = max;
        this.isEvenNumber = isEvenNumber;
    }

    public void run() 
    {
        int number = isEvenNumber == true?2:1;
        while(number<=max) 
        {
            if(isEvenNumber)     
                print.printEven(number);
       
            else 
                print.printOdd(number);
            
            number+=2;
        }
    }
}

class Printer
{
    boolean isOdd = false;

    synchronized void printEven(int number) 
    {
        while(isOdd == false) 
        {
            try 
            {
                wait();
            } 
            catch(InterruptedException e) 
            {
                e.printStackTrace();
            }
        }
        
        System.out.println("Even:" + number);
        isOdd = false;
        notifyAll();
    }

    synchronized void printOdd(int number) 
    {
        System.out.println("Odd:" + number);
        isOdd = true;
        while(isOdd == true) 
        {
            try 
            {
                wait();
            } 
            catch(InterruptedException e) 
            {
                e.printStackTrace();
            }
        }
        
        notifyAll();
    }
}

public class odd_even_generator 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        Printer print = new Printer();
        System.out.println("Enter the max number");        
        int i = sc.nextInt();
        TaskEvenOdd obj=new TaskEvenOdd(print,i,false);
        Thread t1 = new Thread(obj);
        Thread t2 = new Thread(new TaskEvenOdd(print,i,true));
        t1.start();
        t2.start();
    }
}
