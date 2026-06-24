#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    virtual void define(){
        cout<<"I am member of A class ";
    }
};
class Dog : public A{
    public:
    void define(){
        cout<<"I am member of dog class  ";
    }
};

int main(){
    A *obj;
    obj = new Dog();
    obj->define();
    
    return 0;
}