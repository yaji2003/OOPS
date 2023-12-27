#include<bits/stdc++.h>
using namespace std;
class Foo{
    public:
    Foo(int i=0){i=i;}
    void f(){
        std::cout<<"hello"<<std::endl;
    }
    
private:
    int  i;

};

int main(){
    Foo *p=0;
    p->f();
    return 0;
}