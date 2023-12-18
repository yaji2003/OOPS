#include<iostream>
using namespace std;

class A{
    public:
   
    
    int Add(int x=0,int y=0){
        return x+y+20;
    }
    int Add(int x,int y){
        return x+y;
    }
    };


int main(){
    int a=2,b=16;
    A obj;
    cout<<obj.Add(a,b)<<endl;
    cout<<obj.Add(a,b)<<endl;
    return 0;

}