#include<iostream>
using namespace std;

class A{
    public:
    void function(){
        cout<<"A";
    }
};
class B{
    public:
    void function(){
        cout<<"B";
    }
};
int main(){
    A a;
    B b;
    a.function();
    b.function();
    return 0;
}