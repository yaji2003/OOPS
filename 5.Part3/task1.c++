#include<iostream>
using namespace std;

class B{
    public:
    B(){
        cout<<"Class b"<<endl;

    }
};
class C{
    public:
    C(){
        cout<<"Class C"<<endl;

    }


};
class D{
    public:
    D(){
        cout<<"Class d"<<endl;

    }


};
int main(){
    B *b=new D();
    return 0;
}