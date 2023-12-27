#include<bits/stdc++.h>
using namespace std;
class Host{
    public:
    class Nested{
        public:
        void print(){
            cout<<"hello world"<<endl;
        }
    };
};
int main(){
    Host::Nested foo;
    foo.print();
    
    return 0;
}