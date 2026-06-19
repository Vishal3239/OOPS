#include<bits/stdc++.h>
using namespace std;

class A{
public:
    A(){
        cout<<"A ";
    }
};

class B{
public:
    B(){
        cout<<"B ";
    }
};

class C : public A, public B{
public:
    C(){
        cout<<"C ";
    }
};

int main(){
    C obj;
    return 0;
}