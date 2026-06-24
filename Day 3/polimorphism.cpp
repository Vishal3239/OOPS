#include<bits/stdc++.h>
using namespace std;
class Solutation{
    public:
    int a,b;
    Solutation(int a,int b){
        this->a=a;
        this->b=b;
    }
    
    void solve(){
        cout<<a+b;
    }
    void solve(int r){
        cout<<3*r*r;
    }

};

int main(){
    Solutation obj(3,2);
    obj.solve();
    cout<<endl;
    obj.solve(2);
    
    return 0;
}