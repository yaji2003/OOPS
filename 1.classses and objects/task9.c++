#include<iostream>
using namespace std;
class A{
    public:
    static int a;
    static void incr(){
        a+=3;
    }
    static int get(A obj){
        return (a+obj.a);

    
    }
};
int A::a= 10;
int main(){
    A obj1,obj2,obj3;
    obj1.incr();
    obj2.incr();
    A::incr();
    cout<<obj2.get(obj1)<<endl;
    return 0;
}