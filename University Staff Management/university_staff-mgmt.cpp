#include<iostream>
#include<string.h>
using namespace std;

class University
{
    protected:
    char name[50];
    char city[15];
    
    public:
    void accept()
    {
        cout<<"Enter the name of the university"<<endl;
        cin.getline(name,50);
        cout<<"Enter the city in which it is located"<<endl;
        cin>>city;
        cout<<endl;
    }
    
    void display()
    {
        cout<<"University: "<<name<<endl;
        cout<<"City: "<<city<<endl<<endl;
    }
    
    University()
    {
        strcpy(name,"NOT ENTERED");
    }
    
    ~University(){};
};

class College1:public University
{
    protected:
    char coll1name[50];
    int pcode;
    
    public:
    College1()
    {
        strcpy(coll1name,"College 1 ");
        pcode=0;
    }
    
    void accept()
    {
        cout<<"Enter the name of the first college"<<endl;
        cin>>coll1name;
        cout<<"Enter the pincode"<<endl;
        cin>>pcode;
        cout<<endl;
    }
    
    void display()
    {
        cout<<"College: "<<coll1name<<endl;
        cout<<"Pincode: "<<pcode<<endl<<endl;
    }
    
    ~College1(){};
};

class Mechanical:public College1
{
    protected:
    char name[30];
    int ID;
    char subject[10];
    
    public:    
    Mechanical()
    {
        strcpy(name,"NOT ENTERED");
        ID=0;
        strcpy(subject,"NOT ENTERED");
    }
    
    void accept()
    {   
        cout<<"This is the mechanical department of "<<coll1name<<endl;
        cout<<"Enter the name of the teacher"<<endl;
        cin>>name;
        cout<<"Enter the teacher ID number"<<endl;
        cin>>ID;
        cout<<"Enter the subject name"<<endl;
        cin>>subject;
        cout<<endl;
    }
    
    void display()
    {
        cout<<"Following are the details of the requested mechanical faculty:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<ID<<endl;
        cout<<"Subject:"<<subject<<endl<<endl;
    }
    
    ~Mechanical(){};
};    

class Computer:public College1
{
    protected:
    char name[30];
    int ID;
    char subject[10];
    
    public:
    Computer()
    {
        strcpy(name,"NOT ENTERED");
        ID=0;
        strcpy(subject,"NOT ENTERED");
    }
    
    void accept()
    {
        cout<<"This is the computer department of "<<coll1name<<endl;
        cout<<"Enter the name of the teacher"<<endl;
        cin>>name;
        cout<<"Enter the teacher ID number"<<endl;
        cin>>ID;
        cout<<"Enter the subject name"<<endl;
        cin>>subject;
        cout<<endl;
    }
    
    void display()
    {
        cout<<"Following are the details of the requested computer faculty:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<ID<<endl;
        cout<<"Subject:"<<subject<<endl<<endl;
    }
    
    ~Computer(){};
};

class College2:public University
{
    protected:
    char coll2name[50];
    int pcode;
    
    public:
    College2()
    {
        strcpy(coll2name,"");
        pcode=0;
    }
    
    void accept()
    {
        cout<<"Enter the name of the second college"<<endl;
        cin>>coll2name;
        cout<<"Enter the pincode"<<endl;
        cin>>pcode;
        cout<<endl;
    }
    
    void display()
    {
        cout<<"College: "<<coll2name<<endl;
        cout<<"Pincode: "<<pcode<<endl<<endl;
    }
    
    ~College2(){};
};

class Chemical:public College2
{
    protected:
    char name[30];
    int ID;
    char subject[10];
    
    public:
    Chemical()
    {
        strcpy(name,"NOT ENTERED");
        ID=0;
        strcpy(subject,"NOT ENTERED");
    }
    
    void accept()
    {
        cout<<"This is the chemical department of "<<coll2name<<endl;
        cout<<"Enter the name of the teacher"<<endl;
        cin>>name;
        cout<<"Enter the teacher ID number"<<endl;
        cin>>ID;
        cout<<"Enter the subject name"<<endl;
        cin>>subject;
        cout<<endl;
    }
    
    void display()
    {
        cout<<"Following are the details of the requested chemical faculty:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<ID<<endl;
        cout<<"Subject:"<<subject<<endl<<endl;
    }
    
    ~Chemical(){};
};

class Industrial:public College2
{
    protected:
    char name[30];
    int ID;
    char subject[10];
    
    public:
    Industrial()
    {
        strcpy(name,"NOT ENTERED");
        ID=0;
        strcpy(subject,"NOT ENTERED");
    }
    
    void accept()
    {
        cout<<"This is the industrial department of "<<coll2name<<endl;
        cout<<"Enter the name of the teacher"<<endl;
        cin>>name;
        cout<<"Enter the teacher ID number"<<endl;
        cin>>ID;
        cout<<"Enter the subject name"<<endl;
        cin>>subject;
        cout<<endl;
    }
    
    void display()
    {
        cout<<"Following are the details of the requested industrial faculty:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<ID<<endl;
        cout<<"Subject:"<<subject<<endl<<endl;
    }
    
    ~Industrial(){};
};

int main()
{
    University u1;
    u1.accept();
    College1 c1;
    College2 c2;
    Mechanical m1;
    Computer o1;
    Industrial i1;
    Chemical b1;
    c1.accept();
    c2.accept();
    int q1,q2,q3,q4;
    do
    {
        cout<<"1. To access departments of college 1\n2. To access departments of college 2\n3. Go to display\n"<<endl;
        cin>>q1;
        switch(q1)
        {
            case 1:
            cout<<"Which department would you like to accept details of?\n1. Mechanical\n2. Computer\n"<<endl;
            cin>>q2;
            if(q2==1) m1.accept();
            else if(q2==2) o1.accept();
            break;
            
            case 2:
            cout<<"Which department would you like to accept details of?\n1. Chemical\n2. Industrial\n"<<endl;
            cin>>q3;
            if(q3==1) b1.accept();
            else if(q3==2) i1.accept();
            break;
        }
    }while(q1!=3);
    
    cout<<"UNIVERSITY DETAILS:"<<endl;
    u1.display();
    cout<<"AFFILIATED COLLEGES:"<<endl;
    c1.display();
    c2.display();
    
    do
    {
        cout<<"To display details of:\n1. All\n2. Mechanical\n3. Computer\n4. Chemical\n5. Industrial\n6. Quit\n"<<endl;
        cin>>q4;
        switch(q4)
        {
            case 1:
            m1.display();
            o1.display();
            b1.display();
            i1.display();
            break;
            
            case 2:
            m1.display();
            break;
        
            case 3:
            o1.display();
            break;
        
            case 4:
            b1.display();
            break;
        
            case 5:
            i1.display();
            break;
        }
    }while(q4!=6);
}
