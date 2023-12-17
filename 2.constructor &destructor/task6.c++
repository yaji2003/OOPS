#include<iostream>
using namespace std;

class A {
    int a;

public:
    A(int x) : a(x) {
        cout << "A Constructor: " << a << endl;
    }

    ~A() {
        cout << "A Destructor: " << a << endl;
    }
};

void fun(int x) {
    A obj1(x);
}

int main() {
    A obj1(1);
    A obj2(2);
    A obj3(3);
    fun(4);
    fun(5);

    return 0;
}
