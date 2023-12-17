#include<iostream>
using namespace std;

class A {
    int a;

public:
    A(int x) : a(x) {
        cout << "Constructor " << a << endl;
    }

    A() : a(0) {
        cout << "Default Constructor " << a << endl;
    }

    int getval() {
        return a;
    }
};

int main() {
    A obj1(1);
    A obj2; 

    cout << "Value from obj1: " << obj1.getval() << endl;
    cout << "Value from obj2: " << obj2.getval() << endl;

    return 0;
}
