#include<iostream>
using namespace std;
class A{
    public:
    static int a;
    void incr(){
        a++;
    }
    int get(){
        return a;

    
    }
};
int A::a= 10;
int main(){
    A obj1,obj2,obj3;
    obj1.incr();
    obj2.incr();
    obj3.incr();
    cout<<obj3.get()<<obj2.get()<<obj1.get()<<endl;
    return 0;
}