#include<iostream>
using namespace std;
class Distance{
    private:
        int mtr;
        friend int addFive(Distance);
    public:
        Distance(){
            mtr=0;
        }
};
int addFive(Distance d){
    d.mtr+=5;
    return d.mtr;
}
int main(){
    Distance D;
    cout<<"Distance: "<<addFive(D);
    return 0;
}