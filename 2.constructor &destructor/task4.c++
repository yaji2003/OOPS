#include<iostream>
using namespace std;
class A{
    public:
    char ch;int a,b;
    A(){
        a=0,b=0,ch='a';
    }
    A(char c){
        ch=c;
    }
    A(int x,int y){
        a=x;
        b=y;

    }
    void get(){
        cout<<" "<<b<<" "<<ch<<endl;
    }
    };
    int main(){
        A ob1,ob2('Z'),ob3(4,8);
        ob1.get();
         ob2.get();
          ob3.get();
          return 0;
    }