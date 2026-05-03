


#include <iostream>
using namespace std;

class Num {
public:
    int x;
    Num(int a) { x = a; }
    Num operator+(Num obj) {
        return Num(x + obj.x);
    }
};

int main() {
    Num n1(5), n2(10);
    Num n3 = n1 + n2;
    cout << n3.x;
}
