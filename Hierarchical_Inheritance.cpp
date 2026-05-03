

#include <iostream>
using namespace std;

class Base { public: void show() { cout << "Base\n"; } };
class D1 : public Base {};
class D2 : public Base {};

int main() {
    D1 a; D2 b;
    a.show();
    b.show();
}
