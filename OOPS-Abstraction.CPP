#include<iostream>

using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee
{
    private:
    string Name;
    string Company;
    int Age;
    
    public:
    
    Employee(string name,string company,int age)
    {
      Name=name;
      Company=company;
      Age=age;
    }
    
    void AskForPromotion()
    {
        if(Age>30)
        cout<<Name<<" got Promoted!"<<endl;
        
        else 
        cout<<Name<<",sorry No Promotion for you."<<endl;
    }
};

int main()
{
    Employee employee1=Employee("Saldina","YT-CodeBeauty",25);
    
    Employee employee2=Employee("John","Amazon",35);
    
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    
}

///// OUTPUT ////////
Saldina , Sorry NO Promotion for you.
John got Promoted.
