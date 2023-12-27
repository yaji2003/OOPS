#include<iostream>
using namespace std;

class B{
    public:
  virtual  ~B()=0;
};

class D:public B{
    public:
    ~D(){
        cout<<"delivered destructor"<<endl;

    }
     ~B(){
         cout<<"implemente pvf"<<endl;

     }

};
int main(){
    B *b=new D();
    delete b;
    return 0;
}