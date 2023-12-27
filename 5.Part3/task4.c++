#include<iostream>
using namespace std;

class B{
    public:
  virtual  ~B()=0;
};
B::~B(){
         cout<<"implemente pvf"<<endl;

     }
class D:public B{
    public:
    ~D(){
        cout<<"delivered destructor"<<endl;

    }
     

};
int main(){
    B *b=new D();
    delete b;
    return 0;
}