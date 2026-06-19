#include<bits/stdc++.h>
using namespace std;

class Car{
    string brand;
    double price;
    public:
    void setBrand(string s){
        brand=s;
    }

    void setprice(double n){
        price=n;
    }

    string getbrand() const {
        return brand;
    }
    double getprice() const {
        return price;
    }
};

int main(){
    Car s;
    s.setBrand("BMW");
    s.setprice(1200);
    cout<<s.getbrand()<<endl;
    cout<<s.getprice()<<endl;
    
    return 0;
}