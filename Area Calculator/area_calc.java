import java.util.Scanner;
class Area
{
    int a;
    
    int area(int s)
    {   
        a = s*s;
        return a ;        
    }
    int area(int l,int b)
    {   
        int r = l*b;
        return r;
    }
    int area(int b1,int b2,int h)
    {
        int t = ((b1*b2)/2)*h; 
        return t;
    }
} 
public class area_calc 
{
      public static void main(String[] args) 
      {
          int choice,s,s1,s2,l,b,b1,b2,h,s3;
          Scanner sc = new Scanner(System.in);

          Area a = new Area();
        
          do
          {
              System.out.println("\n1. Square\n2. Rectangle\n3. Trapezoid\n4. Exit\n");
              choice =sc.nextInt();
              if(choice==1)
              {
                  System.out.print("Enter the side of the square\n");
                  s = sc.nextInt();
                
                  s1 = a.area(s);
                  System.out.println("Area of square: "+s1);    
              }
              else if (choice ==2)
              {
                  System.out.print("Enter the length the rectangle\n");
                  l = sc.nextInt();
                  System.out.print("Enter the breath the rectangle\n");
                  b = sc.nextInt();
           
                  s2 = a.area(l,b);
                  System.out.println("Area of rectangle: "+s2);
              }
              else if (choice ==3)
              {
                  System.out.print("Enter the base1 of trapezoid\n");
                  b1 = sc.nextInt();
                  System.out.print("Enter the base2 of trapezoid\n");
                  b2 = sc.nextInt();
                  System.out.print("Enter the height of trapezoid\n");
                  h = sc.nextInt();
                  s3 = a.area(b1, b2, h);
                  System.out.print("Area of trapezoid: "+s3 + "\n");
              }
        }while(choice!=4);      
    }    
}
