

#include <iostream>
using namespace std;

class Test { public: void t() { cout << "Test\n"; } };
class Sports { public: void s() { cout << "Sports\n"; } };

class Result : public Test, public Sports {};

int main() {
    Result r;
    r.t();
    r.s();
}