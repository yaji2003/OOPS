 #include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(){
        a=10;
        cout<<"def Constructor:"<<a<<endl;

    }
    A(const A &q){
        a=q.a;
         cout<<"copy constructor:"<<a<<endl;
    }
    void set(int x){
        a=x;
    }
};
int main(){
    A obj;obj.set(11);
    A a1=obj;
    A a2(obj);
    return 0; 
}