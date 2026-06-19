#include<bits/stdc++.h>
using namespace std;

class A{
public:
    void show(){
        cout<<"Class A";
    }
};

class B : public A{
};

class C : public A{
};

class D : public B, public C{
};

int main(){

    D obj;

    // obj.show();   // Error
    obj.B::show();

    return 0;
}