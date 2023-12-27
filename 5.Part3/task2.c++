#include<iostream>
using namespace std;

class B{
    public:
  virtual  ~B(){
        cout<<"Class b"<<endl;

    }
};
class C{
    public:
    virtual ~C(){
        cout<<"Class C"<<endl;

    }


};
class D:public B,public C{
    public:
    ~D(){
        cout<<"Class d"<<endl;

    }


};
int main(){
    B *b=new D();
    delete b;
    return 0;
}