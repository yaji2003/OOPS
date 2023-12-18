#include<iostream>
using namespace std;

class A {
public:
    int Add(int x = 0, int y = 0, int z = 0) {
        return x + y + z;
    }

    int Add(int x, int y) {
        return x + y;
    }
};

int main() {
    int a = 2, b = 16, c = 1;
    A obj;
    cout << obj.Add(a, b, c) << endl;
    cout << obj.Add(a, b) << endl;
    return 0;
}
