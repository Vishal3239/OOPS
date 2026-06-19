#include<bits/stdc++.h>
using namespace std;

class A{
public:
    void show(){
        cout<<"A";
    }
};

class B{
public:
    void show(){
        cout<<"B";
    }
};

class C : public A, public B{
};

int main(){
    C obj;
    // obj.show();
    obj.A::show();
    obj.B::show();
}