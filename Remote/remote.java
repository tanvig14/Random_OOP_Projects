import java.util.*; 
import java.lang.*; 

interface mobile 
{ 
	 int p_model = 1900; 
	 String os = "CyanogenMod"; 
	 void netsurf(); 
	 void selfie(); 
} 

class tv 
{ 	 
	int m_no; 
	int size; 
	String company;	 
	tv(int m_no,int size,String company) 
	{ 
		this.m_no = m_no; 
		this.size = size; 
		this.company = company; 
	} 
	 
	void change_channel() 
	{ 
	    System.out.println("Channel Changed!"); 
	} 
	 
	void change_volume() 
	{ 
	    System.out.println("Volume Changed!"); 
	}	 
} 

class remote extends tv implements mobile 
{ 
	remote(int m_no,int size,String company) 
	{ 
		super(m_no,size,company); 
	} 
	 
	public void netsurf() 
	{ 
	    System.out.println("You are now surfing the internet");	 
	} 
		 
	public void selfie() 
	{ 
	    System.out.println("Selfie clicked. You look great!");	 
	} 
		 
	void display() 
	{ 
	    System.out.println("TV Model: "+m_no); 
	    System.out.println("Screen size: "+size); 
	    System.out.println("Company: "+company); 
	    System.out.println("Mobile Model: "+p_model); 
	    System.out.println("Mobile Os: "+os); 
	} 
		 
	public static void main(String args[]) 
	{ 
	    int ch; 
	    remote t1 = new remote(1980,48,"Sony"); 
	    t1.display();
	  
	    Scanner sc = new Scanner(System.in); 
	    do    
	    { 
            System.out.println("\n1. Change TV volume\n2. Change TV channel\n3. Surf the internet on mobile\n4. Take a selfie on mobile\n5. Exit");  
            ch = sc.nextInt(); 
            switch(ch) 
            { 
                case 1: 
                t1.change_volume(); 
  			    break; 
  
                case 2: 
                t1.change_channel(); 
  			    break; 
	  
                case 3: 
                t1.netsurf(); 
  			    break; 
	  
                case 4:  
                t1.selfie(); 
  			    break; 
           } 	           
       }while(ch!=5);   	    
    }	 
}
