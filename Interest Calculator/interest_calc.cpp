#include<iostream>
#include<math.h>
using namespace std;

class Bank
{
    private:
    float prin;
    float rate;
    int time;
    float interest;
    float amount;
    
    public:
    Bank()
    {
        prin = 0;
        rate = 0;
        time = 0;
    }
    
    float calcInterest(float p,int t,float r)
    {
        prin = p;
        time = t;
        rate = r;
        interest = (prin * rate * time)/(100 * 12);
        cout<<"The simple interest is rupees "<<interest<<endl;
        return interest;
    }
    
    void calcInterest(float p,float amount,float r,int t)
    {
        prin = p;
        rate = r;
        time = t;
        float amt = amount;
        float ci;
        
        ci = amt + pow((1 + (rate/100.0)),(t/12.0));
        cout<<"The compound interest is rupees "<<ci<<endl;
    }
    
    ~Bank(){};
};

int main()
{
    Bank b1;
    float p,r;
    int t;
    cout<<"Enter the principal amount"<<endl;
    cin>>p;
    cout<<"For how many months is the money invested?"<<endl;
    cin>>t;
    cout<<"What is the rate of interest?"<<endl;
    cin>>r;
    float i = b1.calcInterest(p,t,r);
    float amount = i + p;
    b1.calcInterest(p,amount,r,t);    
}
