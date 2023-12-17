 #include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(int x){
        a=x;
        cout<<"Constructor:"<<a<<endl;

    }
    ~A(){
         cout<<"destructor:"<<a<<endl;
    }
};
int main(){
    A obj1(1),obj2(2),obj3(3);
    return 0; 
}