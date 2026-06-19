#include<bits/stdc++.h>
using namespace std;

class Employee{
    string name;
    double salary;
    public :
    void setname(string s){
        name=s;
    }
    void setsalary(double n){
        salary=n;
    }

    string getname() const{
        return name;
    }
    double getsalary()const{
        return salary;
    }
};
int main(){
    Employee e1;

    e1.setname("Rahul");
    e1.setsalary(50000);

    Employee e2;
    e2.setname("Vishal");
    e2.setsalary(70000);

    cout<<e1.getname()<< " ";
    cout<<e1.getsalary()<<endl;
    
    cout<<e2.getname()<<" ";
    cout<<e2.getsalary()<<endl;

    
    return 0;
}