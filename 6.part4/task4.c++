#include<bits/stdc++.h>
using namespace std;
class A{
    int a;
    public:
    A(int x){a=x;}
    int fun(){
        return a*a;
    }
    void fun(int x,int y,int z){
        cout<<(x*y*z)<<endl;
    
    }
};
class B: public A{
    int a ,b;
    public:
    B(int x,int y):
    A(y){
        a=x;b=y;

    }
    int fun(){return a*a+b*b;
    }
};