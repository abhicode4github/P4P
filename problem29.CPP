// Finding the roots of a quadratic equation . 

#include<iostream>
#include<math.h>

using namespace std;

void findRoots(int a,int b,int c)
{
    if(a==0)
    {
        cout<<"invalid";
        return;
    }
    
    int d = b*b - 4*a*c;
    
    double sqrt_val = sqrt((abs(d)));
    
    if(d>0)
    {
        cout<<"Roots are real and different ";
        cout<<(double)(-b + sqrt_val)/(2*a)<<"\n"<<(double)(-b-sqrt_val)/(2*a);
    }
    
    else if(d == 0)
    {
        cout<<"Roots are real and same\n";
        cout<<(double)b/(2*a);
    }
    
    else 
    {
        cout<<"Roots are Complex\n";
        cout<<-(double)b/(2*a)<<"+i"<<sqrt_val/(2*a)<<"\n"<<-(double)b/(2*a)<<"-i"<<sqrt_val/(2*a);
    }
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    findRoots(a,b,c);
    
    return 0;
}
