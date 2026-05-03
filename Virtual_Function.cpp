
#include <iostream>
using namespace std;

class A {
public:
    virtual void display() { cout << "A\n"; }
};

class B : public A {
public:
    void display() { cout << "B\n"; }
};

int main() {
    A* obj = new B();
    obj->display();
}