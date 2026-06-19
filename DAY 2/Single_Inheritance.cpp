#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
    void sound(){
        cout<<"Animal Sound";
    }
};

class Dog : public Animal{

};

int main(){
    Dog obj;
    obj.sound();
    return 0;
}