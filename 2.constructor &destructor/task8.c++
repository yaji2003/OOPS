 #include<iostream>
using namespace std;
class A{
    
    public:
    A(){
    
        cout<<"def Constructor:"<<endl;

    }
};
class my{
    public:
    static A getval(){
        static A a;
        cout<<"hello"<<endl;
        return a;
    }
};
int main(){
    my obj1;
    A obj2=my::getval();
    A obj3=obj1.getval();
    return 0;
}